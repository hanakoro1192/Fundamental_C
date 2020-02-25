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