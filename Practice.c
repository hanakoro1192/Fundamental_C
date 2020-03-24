#include <stdio.h>

int main(void){

    int m;

    printf("値を入力してください:"); scanf("%d", &m);

    printf("%dに10を引いた値は", m); 
    printf("%dです", m-30);
}

#include <stdio.h>
int main(void){
    puts("くま\nさん\n最強"); //putsは分割する文章

    return 0;
}

#include <stdio.h>

int main(void){
    int n1, n2; //２つの数を定義
    int seki; //×をここで定義する

    printf("２つの整数を入力してください");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    seki = n1 * n2;

    printf("それらの積は%dです.\n", seki);

    return 0;
}

#include <stdio.h>

int main(void){

    int n1, n2, n3;
    int tasu;

    printf("３つの整数を入力してください");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    printf("整数3："); scanf("%d", &n3);

    tasu = n1 + n2 + n3;

    printf("それらの和は%dです\n", tasu);

    return 0;
}

#include <stdio.h>

#define NUMBER 2 //学生の数

int min_of(int v[], int n){

    int i;
    int min = v[0];

    for(i = 1; i < n; i++)
        if(v[i] < min)
            min = v[i];
    return min;
}

int main(void){
    int i;
    int kokugo[NUMBER];
    int math[NUMBER];
    int min_k, min_m;

    printf("二人の点数を入力してください\n", NUMBER);
    for(i = 0; i < NUMBER; i++){
        printf("%d[国語]:", i+1); scanf("%d", &kokugo[i]);
        printf(" 数学]:"); scanf("%d", &math[i]);
    }
        min_k = min_of(kokugo, NUMBER);
        min_m = min_of(math, NUMBER);

        printf("国語の最低点=%d\n", min_k);
        printf("数学の最低点=%d\n", min_m);
}


大きい方を返してみる
#include <stdio.h>

int max(int A, int B){
    return (A > B) ? A : B;
}

int main(void){

    int n1, n2;

    printf("２つの整数を入力捨てください");

    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    printf("大きい方の値は%dです \n", max(n1, n2));

    return 0;

}

/**
 * ５つの整数の最小値を求める**/

#include <stdio.h>

int min5(int a, int b, int c, int d, int e){
    
    int min = a;

    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;
    if(e < min) min = e;

    return min;
}

int main(void){
    int A, B, C, D, E;

    puts("５つの値を入力してください");
    printf("整数a:"); scanf("%d", &A);
    printf("整数b:"); scanf("%d", &B);
    printf("整数c:"); scanf("%d", &C);
    printf("整数d:"); scanf("%d", &D);
    printf("整数e:"); scanf("%d", &E);

    printf("最小値は%dです。\n", min5(A, B, C, D, E));

    return 0;
}

//平均値を求めるプログラム
#include <stdio.h>
#define SUM 20;

int main(void){
    int j, practice; //ここで定義を行う

    int a[4] = {3, 2, 5, 1}; //この時点では配列は代入していない

    float avg;

    practice = 0; //practiceの値を代入する
    for(j = 0; j < a[4]; j++){
        practice = practice + a[20];
    }
    avg = (float)practice / a[20];

    printf("合計%d", practice);
    printf("平均：%.1f\n", avg);
    return 0;
}

//代入の方法について
#include <stdio.h>

int main(void){
    int i;
    int array[4] = {1, 2, 3, 4};

    for(i = 0; i < 4; i++){
        array[i] = 2 - i; //for文を使って一個ずつの要素を取得する
        if(i < 3){
            printf("%d", array[i]);
        }else{
            printf("%d\n", array[i]);
        }
    }
}