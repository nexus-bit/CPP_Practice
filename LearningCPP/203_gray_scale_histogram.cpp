//#include<core.hpp>
//#include<highgui.hpp>
//#include<imgproc.hpp>
////#include "opencv2/core/core.hpp"
////#include "opencv2/imgproc/imgproc.hpp"
////#include "opencv2/highgui/highgui.hpp"
//using namespace std;
//using namespace cv;
//
////클래스 선언
//MatND getHistogram(const Mat& image, int nbins = 256);	//기본매개변수 256(bin의개수)
//Mat createHistImage(const MatND& hist, int nbins = 256);
//
//int main() {
//	//file load and check
//	Mat image = imread("pg.jpg", 0);
//	/* 여기 인자에서 0은 뭘까
//		-1 : 원래 영상 포맷으로 읽겠습니다
//		0 : 모두 true color로 읽겠습니다.
//		1 : ahen gray로 읽겠습니다.		*/
//	if (image.data == NULL) return -1;
//
//	//getHistogram함수를 통해 histogram get하기
//	MatND hist = getHistogram(image);
//	//createHistogramImg함수를 통해 histogram 막대그래프 만들기
//	Mat histImg = createHistImage(hist);
//	//display image
//	imshow("남극의 눈물", image);
//	imshow("그것의 실체", hist);
//	//키 입력까지 대기
//	waitKey();
//	return 0;
//}
//
////getHistogram 함수
//MatND getHistogram(const Mat& image, int nbins) {	//인자: 입력영상/bin의갯수(default=256)
//	int histSize[1] = { nbins };
//	float hranges[2] = { 0, 255 };
//	const float* ranges[1] = { hranges };
//	cv::MatND hist;
//	int channels[1] = { 0 };
//	// Computehistogram
//	cv::calcHist(	//calchist함수
//		&image,	//입력 영상 위치(주소)
//		1, // 이미지 갯수
//		channels, // 사용한 채널(gray의 경우 1)
//		cv::Mat(), // mask사용 x(빈 배열)
//		hist, // 히스토그램 결과 저장할 공간
//		1, // 1차원임(채널이 하나뿐이라)
//		histSize, // 8비트라서 bin의갯수는 256(기본매개변수 사용)
//		ranges, // 값의 범위(0~255)
//		true,	//uniform O (유니폼 사용 : 0~255 값의 단계 범위 일정)
//		false	//이전 histogram 무시하고 새로 만들겠습니다.(누적X)
//		//아래 두개는 생략 가능(디폴트값) 
//	);
//	return hist;	//이렇게 생성된 histogram 반환
//}
//
////막대 그래프 hist를 만드는 함수
//Mat createHistImage(const MatND& hist, int nbins) {	//인자 ㅣ 생성한 histogram /bin의 갯수
//	double maxVal = 0;
//	double minVal = 0;
//	minMaxLoc(hist, &minVal, &maxVal, 0, 0);
//	/*minMaxLoc함수
//		hist : 히스토그램
//		hist의 최솟값
//		hist의 최댓값
//		0, 0 : null - 최솟값과 최댓값이 나타나는 위치(필요한경우 지정)	*/
//
//	// 막대 그래프 저장할 공간 할당
//	Mat histImg(nbins, nbins, CV_8UC3, Scalar::all(255));
//	/*histImg함수
//		가로세로 길이는 bin의 크기로 지정함(256*256)
//		CV_8UC3 : 8bit, unsigned, 3개채널(칼라 영상)
//		scalar : 각 픽셀의 초기값은 RGB모두 255(흰색)
//	*/
//
//	//막대 그래프의 최대 길이 : bin 길이의 90% (=230.4)
//	int hpt = static_cast<int>(0.9*nbins);
//	// 막대그래프의 컬러
//	Scalar color = Scalar(255, 0, 0, 0);  // BGR순으로 Blue255
//	for (int h = 0; h < nbins; h++) {	//0번bin부터 maxbin까지 값을 하나씩 읽어 와서 저장
//		float binVal = hist.at<float>(h);
//		int intensity = static_cast<int>(binVal*hpt/maxVal);	//각각의 상대적인 길이
//		line(histImg, Point(h, nbins), Point(h, nbins-1-intensity), color, 1);
//		//대상 이미지/ 시작점(x죄표-bin의 번호, y좌표-bin의 갯수)/
//		//끝점(x좌표 동일, y좌표는 intensity뻄) / 파란색 / 두께 1
//	}
//	return histImg;	//막대 그래프 이미지 반환
//}