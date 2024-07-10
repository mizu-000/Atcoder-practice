
#include <iostream>
using namespace std;

void Input();               //数値入力の関数
int judgement();            //三角形の判定を行う関数
void Output(int n);         //判定結果に応じて文字を出力
//グローバル変数
float Side_1, Side_2, Side_3;//入力された辺の長さを格納する変数
char name_1[32] = "三角形不成立";
char name_2[32] = "正三角形";
char name_3[32] = "二等辺三角形";
char name_4[32] = "直角三角形";
char name_5[32] = "鈍角三角形";
char name_6[32] = "鋭角三角形";
/*Main program
各モジュールの呼び出しを行う
*/
int main()
{
    int n;//判定結果を格納するため
    Input();
    n = judgement();
    Output(n);
    return 0;
}
/*Input
グローバル変数への入力処理を行う
入力パラメータ
Side_1　float型：辺1
Side_2　float型：辺2
Side_3　float型：辺3
*/
void Input() {
    cout << "辺1：入力してね！\n";
    cin >> Side_1;
    cout << "辺2：入力してね！\n";
    cin >> Side_2;    
    cout << "辺3：入力してね！\n";
    cin >> Side_3;
}
/*judgement
3辺の値から三角形の形を判定する
nに判定した結果の数字を格納して返す。
*/
int judgement() {
    int ans;
    float a, b, c,a2,b2,c2;
    a = Side_1;
    b = Side_2;
    c = Side_3;
    if (a < b) {//aが最大となるように並び替える
        float temp;
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        float temp;
        temp = a;
        a = c;
        c = temp;
    }
    a2 = a * a;//2乗をそれぞれ作成
    b2 = b * b;
    c2 = c * c;
    ans = 0;//いずれにも対応しない場合エラーとして0
    if (a + b > c && b + c > a && c + a > b) {//三角形成立かの判定
        if (a == b && a == c) {//正三角形かの判定
            ans = 2;
        }
        else if (a == b || b == c || c == a) {//二等辺三角形かの判定
            ans = 3;
        }
        else if (a2 == b2 + c2) {//直角三角形の判定
            ans = 4;
        }
        else if (b2 + c2 < a2) {//鈍角三角形の判定
            ans = 5;
        }
        else if (b2 + c2 > a2) {//鋭角三角形の判定
            ans = 6;
        }
    }
    else if ((a + b <= c || b + c <= a || c + a <= b) && a > 0 && b > 0 && c > 0) {//三角形不成立かの判定
        ans = 1;
    }
    return ans;
}
/*Output
判定結果を使って文字列を出力する
*/
void Output(int n) {    
    if (n == 0) {
        cout << "ERROR\n適切な数字を入力してください";
        return;
    }
    cout << "三角形の種類は以下のようになりました\n判定結果 :";
    if (n == 1) {
        cout << name_1;
    }
    else if (n == 2) {
        cout << name_2;
    }
    else if (n == 3) {
        cout << name_3;
    }
    else if (n == 4) {
        cout << name_4;
    }
    else if (n == 5) {
        cout << name_5;
    }
    else if (n == 6) {
        cout << name_6;
    }
    cout << endl;
}