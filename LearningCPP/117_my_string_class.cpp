////�ڽ�Ʈ�� Ŭ���� �������� ���� �� ���� ��ü ������ delete�� ���� �Ҹ����� �޸� ��ȯ�� ���� �˾ƺ���, 
//#include<iostream>
//#include<string> //��Ʈ���� ���̺귯���� ��ü
//using namespace std;
//
//int main() {
//	//char�� string ��ġ��
//	string a1("I Love You");
//	char a2[10] = { " Seongsu" };
//	string add = a1 + a2;
//	cout << add << endl;
//
//	//append�� ���ڿ� �߰��ϰ�, �ٸ� string�� �ֱ�
//	string b = ("I like you");
//	b.append(" Jieun");
//	string change1 = b;
//	string change2(b);
//	cout << change1 << ", " << change2 << endl;
//
//	//char�� string�� �ֱ�
//	char c[] = { 'G', 'I', 'V', 'E', '\0' };
//	string chartostring(c);
//	cout << chartostring << endl;
//
//	//string�� ���� �Ҵ�
//	string* pointer = new string("Dynamic alloc");
//	pointer->append("ation");
//	cout << *pointer << endl; //*�� �ٿ��� ���� ����(������ �ּ�)
//	delete pointer; //��ȯ - ��Ʈ�� Ŭ������ �Ҹ��ڰ� ���� �� ����
//
//	 //string �迭, string �Է� �޴� �ΰ��� ���
//	string strarr[3];
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "° �̸� : ";
//		getline(cin, strarr[i], '\n');
//		//getline(cin, string�̸�, '������'); - ��Ʈ���� getline
//		//cin.getline(����, ũ��, '������'); - �Ϲ����� getline�� ����� �ٸ�
//		//cin >> strarr[i];
//	}
//
//	//string�� �� - z�� ���� Ŀ��
//	string compare1("a");
//	string compare2("z");
//	if (compare1 < compare2)
//		cout << "��Ʈ�� a, z �񱳽� z�� �� Ů�ϴ�" << endl; // ��µ�
//
//	//string�� length()�Լ� - ���� ���̸� �˷����
//	string length("He is my sister");
//	cout << "������ : " << sizeof(length) << ", ���� : " << length.length() << endl;
//
//	//string�� substr(���°,�)�Լ� - ���ڸ� ©�����(���� : 0)
//	string cut("You Are Smart");
//	cout << cut.substr(4, 3) << endl; //���� �ϳ��� �� �ڷ� �� ¥��
//
//	//����)char������ �´��� üũ - strcmp()
//	char checkid[10] = { "login" };
//	if (strcmp(checkid, "login") == 0)
//		cout << "char�� �α��� �Ǿ����ϴ�. ";
//	//����)string������ �´��� üũ - �׳� ��
//	string checkpw("login");
//	if (checkpw == "login")
//		cout << "string���� �α��� �Ǿ����ϴ�." << endl;
//
//	//string�� find(ã������, ������ġ)�Լ� - ��ġ �˻�(���� : 0)
//	string search("Our Dirty Mice Are F***ing Annoying To Our Restaurant");
//	int searchFrom = 10; //�˻� ����
//	cout << "10 ���� ó������ ���� Our�� ��ġ�� "<< search.find("Our", searchFrom) << endl;
//
//	//string�� replace(���Ž���, ���ų�, �ٲܰ�) - ���� ����
//	string original("I Love Daddy!");
//	string change("Mom^^");
//	//Dad�� ��ġ�� ã�� �ű���� ��Ʈ�� ������ ���� ��, change�� �ٲٱ�.
//	original.replace(original.find("Dad", 0), original.length(), change);
//	cout << original << endl;
//
//	return 0;
//}