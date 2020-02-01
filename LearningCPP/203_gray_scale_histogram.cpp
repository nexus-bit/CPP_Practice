//#include<core.hpp>
//#include<highgui.hpp>
//#include<imgproc.hpp>
////#include "opencv2/core/core.hpp"
////#include "opencv2/imgproc/imgproc.hpp"
////#include "opencv2/highgui/highgui.hpp"
//using namespace std;
//using namespace cv;
//
////Ŭ���� ����
//MatND getHistogram(const Mat& image, int nbins = 256);	//�⺻�Ű����� 256(bin�ǰ���)
//Mat createHistImage(const MatND& hist, int nbins = 256);
//
//int main() {
//	//file load and check
//	Mat image = imread("pg.jpg", 0);
//	/* ���� ���ڿ��� 0�� ����
//		-1 : ���� ���� �������� �аڽ��ϴ�
//		0 : ��� true color�� �аڽ��ϴ�.
//		1 : ahen gray�� �аڽ��ϴ�.		*/
//	if (image.data == NULL) return -1;
//
//	//getHistogram�Լ��� ���� histogram get�ϱ�
//	MatND hist = getHistogram(image);
//	//createHistogramImg�Լ��� ���� histogram ����׷��� �����
//	Mat histImg = createHistImage(hist);
//	//display image
//	imshow("������ ����", image);
//	imshow("�װ��� ��ü", hist);
//	//Ű �Է±��� ���
//	waitKey();
//	return 0;
//}
//
////getHistogram �Լ�
//MatND getHistogram(const Mat& image, int nbins) {	//����: �Է¿���/bin�ǰ���(default=256)
//	int histSize[1] = { nbins };
//	float hranges[2] = { 0, 255 };
//	const float* ranges[1] = { hranges };
//	cv::MatND hist;
//	int channels[1] = { 0 };
//	// Computehistogram
//	cv::calcHist(	//calchist�Լ�
//		&image,	//�Է� ���� ��ġ(�ּ�)
//		1, // �̹��� ����
//		channels, // ����� ä��(gray�� ��� 1)
//		cv::Mat(), // mask��� x(�� �迭)
//		hist, // ������׷� ��� ������ ����
//		1, // 1������(ä���� �ϳ����̶�)
//		histSize, // 8��Ʈ�� bin�ǰ����� 256(�⺻�Ű����� ���)
//		ranges, // ���� ����(0~255)
//		true,	//uniform O (������ ��� : 0~255 ���� �ܰ� ���� ����)
//		false	//���� histogram �����ϰ� ���� ����ڽ��ϴ�.(����X)
//		//�Ʒ� �ΰ��� ���� ����(����Ʈ��) 
//	);
//	return hist;	//�̷��� ������ histogram ��ȯ
//}
//
////���� �׷��� hist�� ����� �Լ�
//Mat createHistImage(const MatND& hist, int nbins) {	//���� �� ������ histogram /bin�� ����
//	double maxVal = 0;
//	double minVal = 0;
//	minMaxLoc(hist, &minVal, &maxVal, 0, 0);
//	/*minMaxLoc�Լ�
//		hist : ������׷�
//		hist�� �ּڰ�
//		hist�� �ִ�
//		0, 0 : null - �ּڰ��� �ִ��� ��Ÿ���� ��ġ(�ʿ��Ѱ�� ����)	*/
//
//	// ���� �׷��� ������ ���� �Ҵ�
//	Mat histImg(nbins, nbins, CV_8UC3, Scalar::all(255));
//	/*histImg�Լ�
//		���μ��� ���̴� bin�� ũ��� ������(256*256)
//		CV_8UC3 : 8bit, unsigned, 3��ä��(Į�� ����)
//		scalar : �� �ȼ��� �ʱⰪ�� RGB��� 255(���)
//	*/
//
//	//���� �׷����� �ִ� ���� : bin ������ 90% (=230.4)
//	int hpt = static_cast<int>(0.9*nbins);
//	// ����׷����� �÷�
//	Scalar color = Scalar(255, 0, 0, 0);  // BGR������ Blue255
//	for (int h = 0; h < nbins; h++) {	//0��bin���� maxbin���� ���� �ϳ��� �о� �ͼ� ����
//		float binVal = hist.at<float>(h);
//		int intensity = static_cast<int>(binVal*hpt/maxVal);	//������ ������� ����
//		line(histImg, Point(h, nbins), Point(h, nbins-1-intensity), color, 1);
//		//��� �̹���/ ������(x��ǥ-bin�� ��ȣ, y��ǥ-bin�� ����)/
//		//����(x��ǥ ����, y��ǥ�� intensity�M) / �Ķ��� / �β� 1
//	}
//	return histImg;	//���� �׷��� �̹��� ��ȯ
//}