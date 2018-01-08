#include <bits/stdc++.h>

using namespace std;

int  bonus_2=1,bonus_3=1, key=0, bril, heheh=0, opop=4;
double bonus_1=1;
int complit_1=0, complit_2=0, complit_3=0, complit_4=0, per_win=10;


void sleep(int b){
    int a=1;
    while (a<b*10000000) a++;
}

int kypon(int money, int balance) {
    double r;
    r = rand()%500+1;
    cout <<"Активируем купон на MNOGO DENEG"<<endl;
    cout<<"Вы выиграли "<<money*0.3*r/100*opop/4<<"$"<<endl;
    if (money*0.3*r/100*opop/4<money*0.4){
        cout<<"Но я забираю 5% шанса выпадения АК_47|Red_Line )))))))"<<endl;
        bonus_1-=2.5;
    }
    balance+=money*0.3*r/100*opop/4;
    return balance;
}


int brilliant_case(int money, int balance){
    cout<<"Ну что, готов к супер кейсу, в котором люди оставляют свои квартиры или забирают чужие?"<<endl;
    int a, dead=1;
    sleep(10000);
    cout<<"xexexe..."<<endl;
    sleep(10000);
    while (dead==1){

        dead=0;
        a = rand()%4 + 1;
        if (a==1 && complit_1==1) dead=1;
        if (a==2 && complit_2==1) dead=1;
        if (a==3 && complit_3==1) dead=1;

    }



    if (a==1 && complit_1==0){
        cout << "Повезло..."<<endl;
        cout<<"        ты выиграл +25% выиграшу MNOGO DENEG"<<endl;
        cout<<"				но не жди, что будет везти "<<endl;
        cout<<"в следующий раз..."<<endl;
        cout<<"							я забираю 5% шанса выиграть Штык нож)))"<<endl;
        cout<< endl;
        heheh=5;
        opop=5;
        complit_1=1;


    } else if(a==2 && complit_2==0){


        cout<<"Ахахаха..."<<endl;
        cout<<"			Неудачник!"<<endl;
        cout<<"	Ты теряешь все свои деньги))))"<<endl;
        cout<<"				Но я оставлю тебе"<<money*0.5<<"$"<<endl;
        cout<<"и каждый твой выигрыш будет приносить на 10% больше"<<endl;
        per_win=11;
        balance=money*0.5;
        complit_2=1;



    } else if (a==3 && complit_3==0){
        cout<<"Эхх..."<<endl;
        cout<<"								Скукота..."<<endl;
        cout<<"		Теперь у тебя есть купон на получение MNOGO DENEG"<<endl;
        cout<<"Но если тебе выпадет меньше "<<money*0.4<<"$"<<endl;
        cout<<"						То я заберу 5% к шансу выпадения"<<endl;
        cout<<"	АК_47|Red_Line"<<endl;
        balance = kypon(money, balance);


    } else{
        cout << "Просто получи +2 рандомныx бонусa"<<endl;
        int b=rand()%3+1;
        if (b==1)   bonus_1+=2;
        if (b==2)   bonus_2+=2;
        if (b==3)   bonus_3+=2;
    }
    return balance;

}



double play(double money, double balance){
    int kase, a;
    double r;
    double win=0;
    r = rand()%500+1;
    a = rand()%100 + 1;
    sleep(3000);
    cout <<endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;
    cout << "Ваш баланс: "<< balance << "$"<<endl;
    cout << "Какой кейс?	1) Мажор_Кейс	2) Silver_Кейс 	3) Бомж_Кейс ?"<<endl;
    cout << "                      "<<money*0.3<<"$          "<<money*0.1<<"$                    "<<money*0.05<<"$"<<endl;
    cin >> kase;
    cout <<endl;
    if (kase == 1){
        cout <<"Баланс: "<<balance<< "$ - "<<money*0.3<<"$ = "<<balance-money*0.3<<"$"<<endl;
        cout <<endl;
        balance-=money*0.3;
        cout << "Открывается Мажор_Кейс..." <<endl;
        sleep(10000);
        cout << "Уже почти..."<< endl;
        sleep(10000);
        cout << "Вы выиграли ";
         if (a < 3+bonus_2){
            cout <<"MHOGO DENEG Стоимостью "<<money*0.3*r/100*opop/4<<"$"<<endl;
            cout << "PAY! PAY! PAY!"<<endl;
            cout <<"                                                                wooohooo!"<<endl;
            win=money*r*0.3/100;
        } else if (a < 10+bonus_2-heheh){

            cout<< "Штык-нож Стоимостью " <<money*0.9<<"$"<<endl;
            win=money*0.9;
        }
        else if (a < 40+bonus_2){
            cout << "AWP|Azimov Стоимостью "<<money*0.6<<"$"<<endl;
            win=money*0.6;
        } else if (a>97-key ){
            cout << "Вы выиграли бонус +2 % к выигрышу AK_47|Red_Line !!!!!!111111111"<<endl;
            bonus_1++;
        }
         else {

            cout <<"Gut_Knife Стоимостью "<<money*0.06*(1+bonus_3*0.05)<<"$"<<endl;
            win=money*0.06*(1+bonus_3*0.05);
        }
    } else if (kase == 2){

        cout <<"Баланс: "<<balance<< "$ - "<<money*0.1<<"$ = "<<balance-money*0.1<<"$"<<endl;
        balance-=money*0.1;
        cout << "Открывается Silver_Кейс..." <<endl;

        sleep(10000);
        cout << "Уже почти..."<< endl;

        sleep(10000);
        cout << "Вы выиграли ";



        if (a<10+bonus_1*2){
            cout << "AK_47|Red_Line Стоимостью "<<money*0.28<<"$"<<endl;
            win=money*0.28;
        }
        else if (a<35){
            cout<< "Desert_Eagle|Naga Стоимостью " <<money*0.18<<"$"<<endl;
            win=money*0.18;
        }
        else if (a<96-key){

            cout <<"X-ray Стоимостью "<<money*0.05*(1+bonus_3*0.05)<<"$"<<endl;
            win=money*0.05*(1+bonus_3*0.05);
        } else {
            cout <<" бонусные 5% призовых за самые дешевые пушки в каждом кейсе!!11111 "<<endl;
            bonus_3++;
        }

    } else if (kase == 3){

        cout <<"Баланс: "<<balance<< "$ - "<<money*0.05<<"$ = "<<balance-money*0.05<<"$"<<endl;
        balance-=money*0.05;

        cout << "Открывается Бомж_Кейс..." <<endl;

        sleep(10000);
        cout << "Уже почти..."<< endl;

        sleep(10000);
        cout << "Вы выиграли ";


        if (a<15){
            cout << "M16|DARK Стоимостью "<<money*0.2<<"$"<<endl;
            win=money*0.2;
        }
        else if (a<50){
            cout<< "M4A4|BRONZE Стоимостью " <<money*0.07<<"$"<<endl;
            win=money*0.07;

        }
        else if (a<95-key){
            cout <<"Glock|Zaharanenie Стоимостью "<<money*0.02*(1+bonus_3*0.05)<<"$"<<endl;
            win=money*0.02*(1+bonus_3*0.05);
        } else {
            cout<<"Вы выиграли бонус +1 % к выигрышу MNOGO DENEG!!!!!!!!!11 "<<endl;
            bonus_2++;
        }




    } else cout <<"jeppy sosi"<<endl;
    cout << "Теперь ваш баланс составляет: "<< balance<<"$ + "<<win*per_win/10<<"$ = "<<balance + win*per_win/10<<"$"<<endl;
    balance += win*per_win/10;
    cout <<endl;
    cout <<"+ "<<bonus_1*2<<"% к выигрышу AK_47|Red_Line"<<endl;
    cout<<endl;

    cout <<"+ "<<bonus_2*1<<"% к выиграшу MNOGO DENEG"<<endl;
    cout<<endl;
    cout <<"бонусные + "<<bonus_3*5<<"% призовых"<<endl;
    cout<<endl;
    cout << "+ "<<key<<"% к выпадению бонусов"<<endl;
    cout<<endl;
    cout << endl;
    int ans_1;

    if (balance>money*2){

        cout<<"Хотите обменять "<<money*2<<"$ на +2% к выпадению бонусов?"<<endl;
        cout << "1) Yes                                 2)No, thanks"<<endl;
        cin>> ans_1;
        if (ans_1==1){
            balance-=money*2;
            key+=2;
        }

    }


    int ans_2;
    if (bonus_1*bonus_2*bonus_3>0){

        cout << "Хотите обменять каждый бонус на ключ к бриллиантовому кейсу? "<<endl;
        cout << "1) Yes                                 2)No, thanks"<<endl;
        cin >>ans_2;
        if (ans_2 == 1){

            bonus_1--;

            bonus_2--;

            bonus_3--;

            balance = brilliant_case(money, balance);

        }

    }

    return balance;
}

int main(){

    setlocale(0, "");
    int num = 0;
    double money = 0, balance;
    cout << "Внесите наличные в долларах США" <<endl;
    cin >> money;
    balance = money;
    while (money*5 > balance && balance>0){
        balance = play(money, balance);
    }
    if (balance < 0){
    cout <<endl;
        cout <<"Приходите еще, мы принимаем Full HD телевизоры как ставки!";

    cout <<endl;
        system("pause");
        return 0;
    }
    if (money*500000<balance){
        cout <<"Извините, вы самый сильный игрок в кейсы, у нас нету больше денег(((";
        system("pause");
        return 0;
    }
}
