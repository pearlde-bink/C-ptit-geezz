#include <bits/stdc++.h>
using namespace std;
struct data{
	string name,sub,ma,tt,s;
};
void chuanhoa(string &a){
	string x="";
	x+=a[0];
	for(int i=0;i<a.size();i++){
		if(a[i]==' ') x+=(char)(a[i+1]-32);
	}
	a=x;
}
int main(){
	int n;
	cin>>n;
	struct data a[n];
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,a[i].name);
		getline(cin,a[i].sub);
		if(i<9) a[i].ma="GV0";
		else a[i].ma="GV";
		a[i].ma+=to_string(i+1);
		int m=a[i].name.size(),k;
		a[i].tt="";
		a[i].s="";
		for(int j=0;j<a[i].name.size();j++){
			char k=a[i].name[j];
			if(k>='A'&&k<='Z') k+=32;
			a[i].s+=k;
		}
		chuanhoa(a[i].sub);
		for(int j=m-1;j>=0;j--){
			if(a[i].name[j]==' '){
				k=j;
				break;
			}
		}
		for(int j=k+1;j<m;j++) a[i].tt+=a[i].name[j];
	}
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string x;
		getline(cin,x);
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<x<<":"<<endl;
		string k="";
		for(int i=0;i<x.size();i++){
			k+=x[i];
			if(k[i]>='A'&&k[i]<='Z') k[i]+=32;
		}
		for(int i=0;i<n;i++){
			if(a[i].s.find(k)!=-1) cout<<a[i].ma<<" "<<a[i].name<<" "<<a[i].sub<<endl;
		}
	}
}
/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
1
aN
*/

