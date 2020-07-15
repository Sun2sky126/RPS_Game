
/*
-----------------------------------------------------
|                                                   |
|                     S-P-S                         |
|              SCISSORS PAPER STONE                 |
|                Game by SUNHAO                     |
|              All rights reserved                  |
|                                                   |
-----------------------------------------------------
*/

#include<iostream>
#include<conio.h>
#include<ctime>
#include<iomanip>
#include<string>
using namespace std;

/*
function main
*/

int main()
{
	void cover();
	cover();
	system("pause");
	return 0;
}

/*
function cover
show the cover
press any key to enter the menu
*/

void cover()
{
	cout << endl ;
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|              SCISSORS   PAPER   STONE              |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl;
	cout << "         Created by SUN Hao , all rights reserved." << endl;
	cout << endl;
	cout << "                Press any key to start!              " << endl;
	cout << endl;
	system("pause");
	void menu();
	menu();
}

/*
function menu
show the menu and six options
enter the number
1-5 will enter related pages
others mean quit the game
*/

void menu()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                     M E N U                        |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                  1  Single Mode                    |" << endl;
	cout << "|                  2  Double Mode                    |" << endl;
	cout << "|                  3  Online Mode                    |" << endl;
	cout << "|                  4  Scores                         |" << endl;
	cout << "|                  5  Help                           |" << endl;
	cout << "|                  6  Quit                           |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl << "Please enter the number:  ";
	char select;
	select = _getch();
	void sing();
	void doub();
	void onli();
	void scores();
	void help();
	void quit();
	switch (select)
	{
	case '1':sing();
		break;
	case '2':doub();
		break;
	case '3':onli();
		break;
	case '4':scores();
		break;
	case '5':help();
		break;
	default:quit();
		break;
	}
	help();
}

/*
function help
show how to play the game
*/

void help()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "                        H E L P " << endl;
	cout << endl;
	cout << "Just enter your choice: scissors, stone or paper. " << endl
		<<"The scissors win the paper,"<<endl
		<<"paper wins stone, and stone wins scissors.\n";
	cout << endl;
	cout << "For single mode, the only player is yourself." << endl
		<< "Just input the number, and you will get the result." << endl
		<< "You can choose to play only one round." << endl
		<< "You can alse choose to play more rounds." << endl
		<< "We have survival mode, if you want to survive" << endl
		<< "then you can't lose." << endl;
	cout << endl;
	cout << "For double mode, two players can play" << endl
		<< "on the same computer." << endl
		<< "Also you can choose to play one or more rounds." << endl;
	cout << endl;
	cout << "For online mode, you can create or join a game." << endl
		<< "If you create, just call your friend to join." << endl
		<< "You can join, if other people create a round." << endl;
	cout << endl;
	cout << "In scores, you can see your achievements." << endl
		<< "And you can choose to clear, save or load scores." << endl;
	cout << endl;
	cout << "Press any key to return!" << endl;
	system("pause");
	void menu();
	menu();
}

/*
function quit
request whether to exit the game
*/

void quit()
{
	void menu();
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|               Are    you   sure?                   |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|       1 YES                      0   NO            |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl << "Please enter 1 or 0" << endl;
	char q;
	q = _getch();
	if (q != '1')
		menu();
	else
	{
		system("cls");
		cout << "------------------------------------------------------" << endl;
		cout << "|                                                    |" << endl;
		cout << "|                   BYE  BYE!                        |" << endl;
		cout << "|                                                    |" << endl;
		cout << "------------------------------------------------------" << endl;
		exit(0);
	}
}

/*
function single
single mode for one player
*/

void sing()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                 S I N G L E                        |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                  1  One Round                      |" << endl;
	cout << "|                  2  Three Rounds                   |" << endl;
	cout << "|                  3  Five Rounds                    |" << endl;
	cout << "|                  4  Survival Mode                  |" << endl;
	cout << "|                  5  Return                         |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl << "Please enter a number ";
	char select;
	select = _getch();
	void one();
	void multi(int);
	void survival();
	switch (select)
	{
	case '1':one();
		break;
	case '2':multi(2);
		break;
	case '3':multi(3);
		break;
	case '4':survival();
		break;
	default:menu();
		break;
	}
}

#define SCISSORS 1
#define PAPER 2
#define STONE 3

//write down the scores
typedef struct
{
	int WIN;
	int TIE;
	int LOSE;
	int TOTAL;
	int SURVIVAL;
}score;
score S = { 0,0,0,0,0 };

/*
function one
for one round
*/

void one()
{
	system("cls");
	int unit();
	unit();
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Wanna play again? " << endl;
	cout << endl;
	cout << "           1 YES               0 NO" << endl;
	cout << "------------------------------------------------------" << endl;
	char select;
	select = _getch();
	if (select == '1')
		one();
	else
		menu();
}

int unit()
{
	cout << "------------------------------------------------------" << endl;
	cout << "  Enter SCISSORS(1) PAPER(2) or STONE(3):" << endl;
	cout << "------------------------------------------------------" << endl;
	int player;
	cin >> player;
	int computer();
	int oppo = computer();
	void menu();
	char name1[] = "YOU";
	char name2[] = "COMPUTER";
	int judge(char[], int, char[], int);
	int result;
	result = judge(name1, player, name2, oppo);
	return result;
}

/*
function judge
input the choices of a and b
and determine who will win
and store the scores according to A
*/

int judge(char A[], int a, char B[], int b)
{
	switch (a)
	{
		case SCISSORS:
			switch (b)
			{
			case SCISSORS:
				printf("%s's choice is SCISSORS, %s's choice is SCISSORS, you end in a tie.\n", A, B);
				S.TIE++;
				return 0;
				break;
			case PAPER:
				printf("%s's choice is SCISSORS, %s's choice is PAPER, %s win.\n", A, B, A);
				S.WIN++;
				return 1;
				break;
			case STONE:
				printf("%s's choice is SCISSORS, %s's choice is STONE, %s lose.\n", A, B, A);
				S.LOSE++;
				return -1;
				break;
			default:
				printf("%s enter a wrong number.\n", B);
				return 0;
				break;
			}
			break;
		case PAPER:
			switch (b)
			{
			case SCISSORS:
				printf("%s's choice is PAPER, %s's choice is SCISSORS, %s lose.\n", A, B, A);
				S.LOSE++;
				return -1;
				break;
			case PAPER:
				printf("%s's choice is PAPER, %s's choice is PAPER, you end in a tie.\n", A, B);
				S.TIE++;
				return 0;
				break;
			case STONE:
				printf("%s's choice is PAPER, %s's choice is STONE, %s win.\n", A, B, A);
				S.WIN++;
				return 1;
				break;
			default:
				printf("%s enter a wrong number.\n", B);
				return 0;
				break;
			}
			break;
		case STONE:
			switch (b)
			{
			case SCISSORS:
				printf("%s's choice is STONE, %s's choice is SCISSORS, %s win.\n", A, B, A);
				S.WIN++;
				return 1;
				break;
			case PAPER:
				printf("%s's choice is STONE, %s's choice is PAPER, %s lose.\n", A, B, A);
				S.LOSE++;
				return -1;
				break;
			case STONE:
				printf("%s's choice is STONE, %s's choice is STONE, you end in a tie.\n", A, B);
				S.TIE++;
				return 0;
				break;
			default:
				printf("%s enter a wrong number.\n", B);
				return 0;
				break;
			}
			break;
		default:
			printf("%s enter a wrong number.\n", A);
			return 0;
			break;
	}
}

/*
function computer
let the computer make its choice randomly
*/

int computer()
{
	int oppo;
	srand((unsigned)time(NULL));
	oppo = rand() % 3 + 1;
	return oppo;
}

/*
function multi
for n rounds
who first win n rounds will finally win the game
*/

void multi(int n)
{
	system("cls");
	int a = 0, b = 0;
	int unit();
	int result;
	while (a < n && b < n)
	{
		result = unit();
		if (result == 1)
			a++;
		else
			if (result == -1)
				b++;
	}
	cout << endl << endl;
	if (a == n)
		cout << "YOU finally win." << endl;
	else
		if (b == n)
			cout << "COMPUTER finally win." << endl;
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Wanna play again? " << endl;
	cout << endl;
	cout << "           1 YES               0 NO" << endl;
	cout << "------------------------------------------------------" << endl;
	char select;
	select = _getch();
	if (select == '1')
		multi(n);
	else
		menu();
}

/*
function survival
survival mode
continue if win or tie
game over if lose
store the max survival rounds
*/

void survival()
{
	system("cls");
	int survival_n = 0;
	int result = 1;
	int unit();
	do
	{
		result = unit();
		if (result == 1 || result == 0)
			survival_n++;
		if (result == -1)
			break;
	} while (1);
	if (survival_n > S.SURVIVAL)
		S.SURVIVAL = survival_n;
	printf("\nYou totally survive %d rounds!\n",survival_n);
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Wanna play again? " << endl;
	cout << endl;
	cout << "           1 YES               0 NO" << endl;
	cout << "------------------------------------------------------" << endl;
	char select;
	select = _getch();
	if (select == '1')
		survival();
	else
		menu();
}

/*
function double
game for two players
*/

void doub()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                 D O U B L E                        |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                  1  One Round                      |" << endl;
	cout << "|                  2  Three Rounds                   |" << endl;
	cout << "|                  3  Five Rounds                    |" << endl;
	cout << "|                  4  Return                         |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl << "Please enter a number ";
	void double_one();
	void double_multi(int);
	void menu();
	char select;
	select = _getch();
	switch (select)
	{
	case '1':double_one();
		break;
	case '2':double_multi(2);
		break;
	case '3':double_multi(3);
		break;
	default:menu();
		break;
	}
}

/*
function double_one
double mode for two players
one round
*/

void double_one()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "  Enter Player1 and Player2's names:" << endl;
	cout << "------------------------------------------------------" << endl;
	char player1_name[20];
	char player2_name[20];
	cout << endl << "Player1:\t";
	gets_s(player1_name);
	cout << endl << "Player2:\t";
	gets_s(player2_name);
	char player1, player2;
	cout << "------------------------------------------------------" << endl;
	cout << " P1, Enter SCISSORS(1) PAPER(2) or STONE(3):" << endl;
	cout << "------------------------------------------------------" << endl;
	player1 = _getch();
	cout << "------------------------------------------------------" << endl;
	cout << " P2, Enter SCISSORS(1) PAPER(2) or STONE(3):" << endl;
	cout << "------------------------------------------------------" << endl;
	player2 = _getch();
	int player1_num = (int)(player1 - '0');
	int player2_num = (int)(player2 - '0');
	int judge(char[], int, char[], int);
	judge(player1_name, player1_num, player2_name, player2_num);
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Wanna play again? " << endl;
	cout << endl;
	cout << "           1 YES               0 NO" << endl;
	cout << "------------------------------------------------------" << endl;
	char select;
	select = _getch();
	if (select == '1')
		double_one();
	else
		menu();
}

/*
function double_multi
for double mode
two players
n rounds
*/

void double_multi(int n)
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "  Enter Player1 and Player2's names:" << endl;
	cout << "------------------------------------------------------" << endl;
	char player1_name[20];
	char player2_name[20];
	cout << endl << "Player1:\t";
	gets_s(player1_name);
	cout << endl << "Player2:\t";
	gets_s(player2_name);
	char player1, player2;
	int player1_num, player2_num;
	int player1_score = 0, player2_score = 0;
	int result;
	while (player1_score < n && player2_score < n)
	{
		cout << "------------------------------------------------------" << endl;
		cout << " P1, Enter SCISSORS(1) PAPER(2) or STONE(3):" << endl;
		cout << "------------------------------------------------------" << endl;
		player1 = _getch();
		cout << "------------------------------------------------------" << endl;
		cout << " P2, Enter SCISSORS(1) PAPER(2) or STONE(3):" << endl;
		cout << "------------------------------------------------------" << endl;
		player2 = _getch();
		player1_num = (int)(player1 - '0');
		player2_num = (int)(player2 - '0');
		int judge(char[], int, char[], int);
		result = judge(player1_name, player1_num, player2_name, player2_num);
		if (result == 1)
			player1_score++;
		else
			if (result == -1)
				player2_score++;
	}
	if (player1_score == n)
		printf("\n%s win the game.\n", player1_name);
	else
		if (player2_score == n)
			printf("\n%s win the game.\n", player2_name);
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Wanna play again? " << endl;
	cout << endl;
	cout << "           1 YES               0 NO" << endl;
	cout << "------------------------------------------------------" << endl;
	char select;
	select = _getch();
	if (select == '1')
		double_multi(n);
	else
		menu();
}

/*
function scores
show four scores
win means "1" , tie means "0", and lose means "-1"
total means the total score
max survival: in survival mode
*/

void scores()
{
	system("cls");
	S.TOTAL = S.WIN - S.LOSE;
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                 S C O R E S                        |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|     WIN      TIE     LOSE       TOTAL              |" << endl;
	cout << "|     " << setw(3) << S.WIN << "      " << setw(3) << S.TIE << "     " <<
		setw(4) << S.LOSE << "       " << setw(5) << S.TOTAL << "              |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|     MAX SURVIVAL            "<<setw(3)<<S.SURVIVAL<<"                    |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                  1  Clear                          |" << endl;
	cout << "|                  2  Save                           |" << endl;
	cout << "|                  3  Load                           |" << endl;
	cout << "|                  4  Return                         |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	char select;
	select = _getch();
	void score_sure();
	void menu();
	void save();
	void load();
	switch (select)
	{
	case '1':score_sure();
		break;
	case '2':save();
		break;
	case '3':load();
		break;
	default:menu();
		break;
	}
}

/*
function score_sure
determine clear or not
*/

void score_sure()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|               Are    you   sure?                   |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|         WARNING: IF YOU CLEAR THE SCORES           |" << endl;
	cout << "|             THEY WILL NEVER BE FOUND!              |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|       1 YES                      0   NO            |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	char select;
	select = _getch();
	void clear_score();
	void scores();
	switch (select)
	{
	case '1':clear_score();
		break;
	default:scores();
		break;
	}
}

/*
function clear_score
clear all the scores
these values will be all zero
*/

void clear_score()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|           Scores have been all cleared.            |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	system("pause");
	S = { 0,0,0,0,0 };
	void scores();
	scores();
}

#pragma warning(disable:6054)

/*
function save
save the data in file
before that, users have to enter their names and the names of files
*/

void save()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << " Enter the name of the save(end with \".txt\" ):" << endl;
	cout << "------------------------------------------------------" << endl;
	char fname[20];
	gets_s(fname);
	S.TOTAL = S.WIN - S.LOSE;
	FILE* fp;
	errno_t err;
	err = fopen_s(&fp, fname, "w+");
	if (fp == NULL)
	{
		cout << "File opening error!\n";
		scores();
	}
	fprintf(fp, "%d\t%d\t%d\t%d\t", S.WIN, S.TIE, S.LOSE, S.TOTAL);
	fprintf(fp, "%d\n", S.SURVIVAL);
	fclose(fp);
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                       SUCCESS!                     |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl << "Please press any key to return." << endl;
	char select;
	select = _getch();
	void scores();
	scores();
}

#pragma warning(disable:4996)
#pragma warning(disable:6387)
#pragma warning(disable:6031)

/*
function load
read the files
and get the scores
*/

void load()
{
	system("cls");
	void scores();
	cout << "------------------------------------------------------" << endl;
	cout << " Enter the name of the save(end with \".txt\" ):" << endl;
	cout << "------------------------------------------------------" << endl;
	char fname[20];
	gets_s(fname);
	int a, b, c, d, e;
	FILE* fp;
	fp=fopen(fname, "r+");
	if (fp == NULL)
	{
		cout << "Can't find the file!\n";
		scores();
	}
	fscanf(fp, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	S.WIN = a;
	S.TIE = b;
	S.LOSE = c;
	S.TOTAL = d;
	S.SURVIVAL = e;
	scores();
}

#include<winsock2.h>
#include<windows.h>
#pragma comment(lib,"WS2_32.lib")

/*
function server
play as the server
*/

void server()
{
	system("cls");
	void onli();
	void menu();
	WORD wsa = MAKEWORD(2, 2);
	WSADATA wsadata;
	if (WSAStartup(wsa, &wsadata) != 0)
	{
		cout << "Initialization failed!\n";
		menu();
	}
	SOCKET s_server = socket(AF_INET, SOCK_STREAM, 0);
	if (s_server == INVALID_SOCKET)
	{
		cout << "Socket failed!\n";
		menu();
	}
	sockaddr_in server_addr;
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(8888);
	server_addr.sin_addr.S_un.S_addr = INADDR_ANY;
	if (bind(s_server, (SOCKADDR*)& server_addr, sizeof(SOCKADDR)) == SOCKET_ERROR)
	{
		cout << "Bind failed!\n";
		WSACleanup();
		menu();
	}
	if (listen(s_server, 1) < 0)
	{
		cout << "Listen falied!\n";
		menu();
	}
	cout << "LISTEN***********************************************" << endl;
	sockaddr_in clinet_addr;
	SOCKET s_accept;
	int len = sizeof(SOCKADDR);
	s_accept = accept(s_server, (SOCKADDR*)& clinet_addr, &len);
	if (s_accept == SOCKET_ERROR)
	{
		cout << "Connect failed!\n";
		menu();
	}
	cout << "Connection is ready. Ready to accept.\n";
	char recv_buf[100];
	char send_buf[100];
	system("cls");
	char a[] = "YOU";
	char b[] = "OPPOSITE";
	int turn(char[]);
	while (1)
	{
		int recv_len = recv(s_accept, recv_buf, 100, 0);
		if (recv_len < 0)
		{
			s_accept = accept(s_server, (SOCKADDR*)& clinet_addr, &len);
			continue;
			if (s_accept == SOCKET_ERROR)
			{
				cout << "Connection failed!\n";
				menu();
			}
		}
		cout << "------------------------------------------------------" << endl;
		cout << "  Enter SCISSORS(1) PAPER(2) STONE(3) or EXIT(4):" << endl;
		cout << "------------------------------------------------------" << endl;
		cin >> send_buf;
		int a_choice = turn(send_buf);
		int b_choice = turn(recv_buf);
		if (a_choice == 4 || b_choice == 4)
		{
			break;
		}
		send(s_accept, send_buf, 100, 0);
		judge(a, a_choice, b, b_choice);
	}
	closesocket(s_server);
	closesocket(s_accept);
	WSACleanup();
	onli();
}

/*
function client
play as the client
*/

void client()
{
	system("cls");
	void onli();
	WORD wsa = MAKEWORD(2, 2);
	WSADATA wsadata;
	if (WSAStartup(wsa, &wsadata) != 0)
	{
		cout << "Initialization failed!\n";
		menu();
	}
	SOCKET s_server = socket(AF_INET, SOCK_STREAM, 0);
	if (s_server == INVALID_SOCKET)
	{
		cout << "Socket failed!\n";
		menu();
	}
	sockaddr_in server_addr;
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(8888);
	server_addr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	if (connect(s_server, (SOCKADDR*)& server_addr, sizeof(SOCKADDR)) == SOCKET_ERROR)
	{
		cout << "Server connect failed!\n";
		WSACleanup();
		menu();
	}
	else
		cout << "Success!\n";
	system("pause");
	char send_buf[200];
	char accept_buf[200];
	system("cls");
	char a[] = "YOU";
	char b[] = "OPPOSITE";
	int turn(char[]);
	while (1)
	{
		cout << "------------------------------------------------------" << endl;
		cout << "  Enter SCISSORS(1) PAPER(2) STONE(3) or EXIT(4):" << endl;
		cout << "------------------------------------------------------" << endl;
		cin >> send_buf;
		int res_len = send(s_server, send_buf, 100, 0);
		if (res_len < 0)
			cout << "error" << endl;
		cout << "Success!" << endl;
		recv(s_server, accept_buf, 100, 0);
		int a_choice = turn(send_buf);
		int b_choice = turn(accept_buf);
		if (a_choice == 4 || b_choice == 4)
		{
			break;
		}
		judge(a, a_choice, b, b_choice);
	}
	closesocket(s_server);
	WSACleanup();
	onli();
}

/*
function turn
turn the string into a number
*/

int turn(char p[])
{
	switch(p[0])
	{
	case '1':return 1;
		break;
	case '2':return 2;
		break;
	case '3':return 3;
		break;
	case '4':return 4;
		break;
	default:return 0;
		break;
	}
}

/*
function onli
"create" means play as server
"join" means play as client
*/

void onli()
{
	system("cls");
	cout << "------------------------------------------------------" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                    O N L I N E                     |" << endl;
	cout << "|                                                    |" << endl;
	cout << "|                    1 Create A Game                 |" << endl;
	cout << "|                    2 Join A Game                   |" << endl;
	cout << "|                    3 Return                        |" << endl;
	cout << "|                                                    |" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << endl << "Please enter a number:\n";
	char select;
	select = _getch();
	switch (select)
	{
	case '1':server();
		break;
	case '2':client();
		break;
	default:menu();
		break;
	}
}

/*
20191229
SUN Hao
All completed!
Happy New Year! :-)
*/