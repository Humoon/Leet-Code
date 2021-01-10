#include <iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
 
int lcs(string str1, string str2) //�����������
{
	int len1 = str1.size();
	int len2 = str2.size();
	vector<vector<int> > c(len1 + 1, vector<int>(len2 + 1));
 
	for (int i = 0; i <= len1; i++) {
		for (int j = 0; j <= len2; j++) {
			if (i == 0 || j == 0) {
				c[i][j] = 0;
			}
			else if (str1[i - 1] == str2[j - 1]) {
				c[i][j] = c[i - 1][j - 1] + 1;
			}
			else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
		}
	}
	return c[len1][len2];
}
int lcs1(string str1, string str2) //������Ӵ�
{
	int l, r;
	int len1 = str1.size();
	int len2 = str2.size();
	int result = 0;     //��¼������Ӵ�����
	vector<vector<int> > c(len1 + 1, vector<int>(len2 + 1));
 
	for (int i = 0; i <= len1; i++) {
		for (int j = 0; j <= len2; j++) {
			if (i == 0 || j == 0) {
				c[i][j] = 0;
			}
			else if (str1[i - 1] == str2[j - 1]) {
				c[i][j] = c[i - 1][j - 1] + 1;
				result = max(c[i][j], result);
			}
			else {
				c[i][j] = 0;
			}
		}
	}
	for(int i = 0; i <= len1; i++)
	{
		for(int j = 0; j <= len2; j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	 } 
	return result;
}
int main()
{
	string str, str1, str2;
	str = "acbcbcef,abcbced";
	int i = 0;
	for (i = 0; i < str.size(); i++) {  //�ֽ��ַ����Զ��Ž��зָ�
		if (str[i] != ',') {
			i++;
		}
		else { break; }
	}
	str1 = str.substr(0, i);
	str2 = str.substr(i + 1, str.size());
 
	cout << "str1:" << str1 << endl;
	cout << "str2:" << str2 << endl;
 
	cout <<"����������У�"<< lcs(str1, str2) << endl;
	cout << "������Ӵ���" << lcs1(str1, str2) << endl;
 
	return 0;
}
