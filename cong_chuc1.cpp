#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class giangvien{
private:
	string ten;
	string khoa;
	string trinh_do;
	int phu_cap;
	int so_tiet_day;
	int he_so_luong;
	int luong;
	
public:
	giangvien(){}
	giangvien(string ten, string khoa, string trinh_do, int phu_cap, int so_tiet_day, int he_so_luong, int luong){
		this->ten = ten;
		this->khoa = khoa;
		this->trinh_do = trinh_do;
		this->phu_cap = phu_cap;
		this->so_tiet_day = so_tiet_day;
		this->he_so_luong = he_so_luong;
	}
	string getTen(){
		return ten;
	}
	void setTen(string ten){
		this->ten = ten;
	}
	string getkhoa(){
		return khoa;
	}
	void setKhoa(string khoa){
		this->khoa = khoa;
	}
	string getTrinh_do(){
		return trinh_do;
	}
	void setTrinh_do(string trinh_do){
		this->trinh_do = trinh_do;
	}
	int getPhu_cap(){
		return phu_cap;
	}
	void setPhu_cap(int phu_cap){
		this->phu_cap = phu_cap;
	}
	int getSo_tiet_day(){
		return so_tiet_day;
	}
	void setSo_tiet_day(int so_tiet_day){
		this->so_tiet_day = so_tiet_day;
	}
	int getHe_so_luong(){
		return he_so_luong;
	}
	void setHe_so_luong(int he_so_luong){
		this->he_so_luong = he_so_luong;
	}
	int getLuong(){
		return luong;
	}
	void setLuong(int luong){
		this->luong = he_so_luong*730+phu_cap+so_tiet_day*80;
	}
	friend istream &operator>>(istream &is, giangvien &gv)
    {
        cout << "Nhap Ho Ten: "; fflush(stdin); getline(is, gv.ten);
        cout << "Nhap Khoa "; fflush(stdin); getline(is, gv.khoa);
        cout << "Nhap Trinhdo(cu nhan, thac si, tien si): "; fflush(stdin); getline(is, gv.trinh_do);
        cout << "Nhap Phu cap: "; is >> gv.phu_cap;
        cout << "Nhap So tiet day: "; is >> gv.so_tiet_day;
        if (gv.trinh_do == "cu nhan"){
        	gv.he_so_luong = 300;
		}
		else if (gv.trinh_do == "thac si"){
			gv.he_so_luong = 500;
		}
		else if(gv.trinh_do == "tien si"){
			gv.he_so_luong = 1000;
		}
        return is;
    }
	friend ostream &operator<<(ostream &os, giangvien gv)
    {
        cout << "Ho Ten: " << gv.ten << endl;
        cout << "Khoa: " << gv.khoa << endl;
        cout << "Trinh do: " << gv.trinh_do << endl;
        cout << "Phu cap: " << gv.phu_cap << endl;
        cout << "So tiet day: " << gv.so_tiet_day<< endl;
        cout <<"He so luong: " << gv.he_so_luong << endl;
        cout <<"LUong: " << gv.luong << endl;
        return os;
    }
};
int main(){
	int n;
	cout <<"Nhap so giang vien: ";
	cin>> n;
	giangvien *arr = new giangvien[n] ;
	for (int i=1; i<=n;++i){
		cout <<"Nhap thong tin cho giang vien thu " <<i << endl;
		cin >>arr[i];
	}
	cout << endl;
	for (int i=1; i<=n;++i){
		cout <<arr[i];
	}
	return 0;
}