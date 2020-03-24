#include <stdio.h>

int(整数) %d
float(実数) %f
char(文字) %c

演算子
+ - % /(余り)

単項演算子

条件分岐

条件分岐(switch)

continue(一回抜ける)
break(ループする)

int main(void){
    int score = 2;

    if(score >= 50){
        printf("OK!\n"); 
    }else if(score >= 40){
        printf("so.so....\n");
    }else{
        printf("mistake!!\n");
    }
    return 0;
}

int main(void){
   int rank = 20;

   switch(rank){
       case 1:
            printf("gold medal\n");
            break;
        case 2:
            printf("silver modal\n");
            break;
        case 3:
            printf("bronze modal\n");
            break;
        default:
            printf("no medal....\n");
            break;
   }
   return 0;
}

int main(){
    int m = 0;
    while (m < 10){
        printf("%d\n", m);
        m++;
    }

    int n = 0;
    do
    {
        printf("%d\n",n);
        n++;
    } while (n<10);
    return 0;
}

int main(void){
    int m;
    for(m=0; m<10; m++){
        if(m == 3){
            continue;
        }
        if(m==6){
            break;
        }
        printf("%d\n",m);
    }
    return 0;
}

関数

float getMax(float a, float b){
    if(a >= b){
        return a;
    }else{
        return b;
    }
}

float getMax(float a, float b){
    return (a >= b) ? a : b;
}

void swyHi(void){
    printf("hi!!\n");
}

int main(void){
    float result;
    result = getMax(3.5 , 6);
    printf("%f\n", result);

    swyHi();

    return 0;
}

三項演算子
返り値　＝（条件）　？ A : B;
    
void f(void){
    int a =0;
    a++;
    printf("a%d\n", a);
}

int main(void){
    f();
    f();
    f();

    return 0;
}

int main(void){

    // int sales

    // sales[0] = 200;
    // sales[1] = 300;
    // sales[2] = 400;

    int sales2[3] = {200, 300, 400};

    printf("%d\n", sales2[2]);

    return 0;
}

文字列: charの配列{*終端は「0}

int main(void){
    char s[] = {'a', 'b', 'c', '\0'};

    printf("%c\n", s[1]);

    return 0;
}

int main(void){

    int a;
    a = 10;

    int *pa;
    pa = &a;
    printf("%d\n", *pa);

    return 0;
}

void f(long a){
    a += 100;
    printf("%ld\n", a);
}

int main(void){
    long a = 1000;
    f(a);
}

/*
整数の３条地を求める
*/

#include <stdio.h>

//三条の値を返す
int cube(int x){
    return x * x * x;
}

int main(void){
    int n;

    printf("整数値");
    scanf("%d", %n);

    printf("%dの３乗は%dです\n", n, cube(n));

    return 0;
}

//警報を繰り返す

#include <stdio.h>

/*文字chをn個連続して表示*/
void put_chars(int ch, int n){
    while(n --> 0)
        putchar(ch);
    }

    //文字chをn個連続して表示して改行
    void put_chars_ln(int ch, int n){
        put_chars(ch, n); //文字chをn個連続して表示
        put_char('\n');
    }

    //警報をｎ回連続して発する
    void alert(int n){
        put_chars('\a', n); //警報をn個連続して出力
    }

    int main(void){
        int n;

        put_chars_ln('=', 24); //'='を24回表示して改行
        printf("警報を発する回数");
        scanf("%d", &n);
        put_chars_ln('-', 24); //'='を24回表示して改行

        alert(n); //警告をn回出力
        putchar('n');

        put_chars_ln("=", 24); //'='を24回表示して改行
    }

    //こんにちはを表示する
    #include <stdio.h>

    //こんにちはと表示
    void hello(void){
        puts("こんにちは");
    }

    int main(void){
        hello();

        return 0;
    }



    //2個の整数値の平均を求める
    #include <stdio.h>

    //int型の整数値を読み込んで返却
    int scan_int(void){
        int temp;

        printf("整数値:");
        scanf("%d", &temp);

        return temp;
    }

    //int型の整数値aと整数値bの平均値をint型で返却
    int ave_of(int a, int b){
        return (a + b) / 2;
    }

    int main(void){
        int n1 = scan_int();
        int n2 = scan_int();
        int n3 = scan_int();
        int ave;

        //n1とn2の平均値
        if((ave == ave_of(n1,n2)) == 0)
            printf("n1とn2の平均はゼロです\n");
        else if(ave > 0)
            printf("n1とn2の平均は正で値は%dです\n", ave);
        else
            printf("n1とn2の平均は負で値は%dです\n", ave);
        
        //n1とn3の平均値
        if((ave == ave_of(n1,n3)) == 0)
            printf("n1とn3の平均はゼロです\n");
        else if(ave > 0)
            printf("n1とn3の平均は正で値は%dです\n", ave);
        else
            printf("n1とn3の平均は負で値は%dです\n", ave);

        //n2とn3の平均値
        if((ave == ave_of(n2,n3)) == 0)
            printf("n2とn3の平均はゼロです\n");
        else if(ave > 0)
            printf("n2とn3の平均は正で値は%dです\n", ave);
        else
            printf("n2とn3の平均は負で値は%dです\n", ave);

        return 0;
    }


    //点数を読み込んで合格者(60点以上)の一覧を表示
    #include <stdio.h>

    int point[7];

    void print_sucess(void);

    int main(void){
        int i;
        extern int point[7];
        puts("7人の点数を入力してください");
        for(i = 0; i < 7; i++){
            printf("%d:", i+ 1);
            scanf("%d", &poiint[i]);
        }

        print_sucess();
        return 0;
    }

    //合格者の一覧
    void print_sucess(void){
        int i;
        extern int point[7];
        puts("合格者一覧表");
        puts("-------");
        for(i = 0; i < 7; i++){
            if(point[i] >= 60)
                printf("%d番：%d\n", i + 1,point[i]);
        }
        puts("---------");
    }

//構造体
typedef 定義されている型　定義する新しい関数名

typedef int seisu_t; //のような形

//例
typedef int* intPtr_t;

//*intPtr_t型を引数に取りintPtr_t型を戻り値とする関数
//pのポインタ値を３だけ進めたポインタ値を返す
intPtr_t foo(intPtr_t p){
    return p + 3;
}

int main(){
    int a[10];
    intPtr_t p; //intPtr_t型の宣言

    p = foo(a); //pの値はa[3]を指すポインタ値
}

//サンプルプログラム
#include <stdio.h>

typedef struct {
    char name[20];
    char sex;
    int age;
    double height;
    double weight;
} person_t;

int main(){
    person_t p = {"Tom", 'M',19, 175.2, 69.5};

    printf("%s %c %d %f %f\n", p.name, p.sex, p.age, p.height, p.weight);
    p.age++;
    p.height += 0.7;
    p.weight -= 1.5;
    printf("%s %c %d %f %f\n", p.name, p.sex, p.age, p.height, p.weight);

    return 0;
}

//構造体のサイズ
#include <stdio.h>

typedef struct{
    char name[20];
    char sex;
    int age;
    double height;
    double weight;
} person_t;

int main(void){
    person_t p;

    printf("name=%d, sex=%d, age=%d, height=%d, weight=%d\n",sizeof(p.name),sizeof(p.sex),sizeof(p.age),sizeof(p.height),sizeof(p.weight));
    printf();
};

typedef struct {
    char name[20];
    char sex;
};


/**
 * 問題6-10
 * 英語の点数と数学の点数の最低点を求める**/

#include <stdio.h>

#define NUMBER 5 //学生の数

//要素数nの配列vの最小値を返す
int min_of(const int v[], int n)
{ //この中に処理を書いてしまう
    int i;
    int min = v[10];

    for(i = 1; i < n; i++) //ここが最低点を表す
        if(v[i] < min) //minは上記で設定している
            min = v[i];
    return min;
}

int main(void){
    int i;  
    int eng[NUMBER]; //英語の点数
    int mat[NUMBER]; //数学の点数
    int min_e, min_m; //最低点

    printf("%d人の点数を入力してください. \n", NUMBER);
    for(i = 0; i < NUMBER; i++){
        printf("[%d]英語", i+1); scanf("%d", &eng[i]);
        printf("   数学:");  scanf("%d", &mat[i]);
    }
    min_e = min_of(eng, NUMBER); //英語の最低点
    min_m = min_of(mat, NUMBER); //数学の最低点

    printf("英語の最低点=%d\n", min_e);
    printf("数学の最低点=%d\n", min_m);

    return 0;
}

/**
 * 問題6-1
 * ２つの整数の小さい方の値を求める**/

#include <stdio.h>

//２つの整数の小さい方の値を返す
int min2(int a, int b){
    return (a < b) ? a : b;
}

int main(void){
    int n1, n2;

    puts("２つの整数を入力してください");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    printf("小さい方の値は%dです.\n", min2(n1, n2));

    return 0;
}


/**
 * ３つの整数の最小値を求める**/
#include <stdio.h>

int min3(int a, int b, int c){
    int min = a; //一番最小値

    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}

int main(void){

    int A, B, C;

    puts("３つの整数を入力してください");
    printf("整数a:"); scanf("%d", &A);
    printf("整数b:"); scanf("%d", &B);
    printf("整数c:"); scanf("%d", &C);

    printf("最小値は%dです。\n", min3(A, B, C));

    return 0;
}

#include <stdio.h>

int cube(int x){

    //値を３つ返す
    return x * x * x;
}

int main(void){

    int n;

    printf("整数値:"); scanf("%d",&n);
    printf("%dの３条は%dです.\n", n, cube(n));

    return 0;
}


/**
 *こんちにはを入力する**/

#include <stdio.h>

//こんにちは
void hello(void){
    printf("こんにちは\n");
}

void kumasan(void){
    puts("くまさん");
}

//main関数で処理を記入
int main(void){
    hello();
    kumasan();

    return 0;
}

//平均値を求めるプログラム
#include <stdio.h>
#define NUM 10;

int main(void){
    int i, practice;

    int a[] = {5,7,2,1,9,5,3,8,2,3};

    float avg;

    practice = 0;
    for(i = 0; i < NUM i++){
        practice = practice + a[i];
    }
    avg = (float)practice / NUM;

    printf("合計%d", practice);
    printf("平均：%.1f\n", avg);
    return 0;
}

//不角定数の平均値を求めるプログラムを作る
#include <stdio.h>
#define KAZU 5;

int main(void){
    int a[5];
    int max, min;

    printf("aの値");
    scanf("%d", &a[0]);

    printf("bの値");
    scanf("%d", &a[1]);

    printf("cの値");
    scanf("%d", &a[2]);

    printf("dの値");
    scanf("%d", &a[3]);

    printf("eの値");
    scanf("%d", &a[4]);

    //最低点と最高点を判別
    max = min = a[0];
    for(int i = 0; i < 5; i++){
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
    }
}

