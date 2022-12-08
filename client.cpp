#include <iostream>
#include <queue>
#define MAX_MENU_COUNT 11
using namespace std;

class Order {
   public:
    queue<int> qMenu;
    queue<int> qCount;
    int menuNumber[MAX_MENU_COUNT];
    int menuCount[MAX_MENU_COUNT];
    int count, i;
    void printMenu() {
        cout << "              MENU             \n";
        cout << " ------------------------------\n";
        cout << "|     abcd버거 | ₩1000 | 1     |\n";
        cout << "|     efgh버거 | ₩2000 | 2     |\n";
        cout << " ------------------------------\n";
    }
    void orderMenu() {
        cout << "메뉴 종류의 수를 입력해주세요(최대 10개) : ";
        cin >> count;
        cout << "메뉴를 입력해주세요\n"
             << "형식 : 1(메뉴 번호) 1(개수)\n";
        for (i = 1; i <= count; i++) {
            cin >> menuNumber[i] >> menuCount[i];
            qMenu.push(menuNumber[i]);
            qCount.push(menuCount[i]);
        }
    }
};

int main() {
    cout << "Hello world\n";
    return 0;
}