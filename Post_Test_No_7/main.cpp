#include <iostream>
#include <string>

using namespace std;

string rockPaperScissor352(string player1352, string player2352){
    string hasil352;

    if (player1352 == "gunting"){
            if (player2352 == "gunting"){
                hasil352 = "Draw!";
            } else if (player2352 == "kertas"){
                hasil352 = "Player 1 Menang!";
            } else if (player2352 == "batu"){
                hasil352 = "Player 2 Menang!";
            }
    } else if (player1352 == "batu"){
            if (player2352 == "gunting"){
                hasil352 = "Player 1 Menang!";
            } else if (player2352 == "kertas"){
                hasil352 = "Player 2 Menang!";
            } else if (player2352 == "batu"){
                hasil352 = "Draw!";
            }
    } else if (player1352 == "kertas"){
            if (player2352 == "gunting"){
                hasil352 = "Player 2 Menang!";
            } else if (player2352 == "kertas"){
                hasil352 = "Draw!";
            } else if (player2352 == "batu"){
                hasil352 = "Player 1 Menang!";
            }
    }

    cout << "Player 1 = " << player1352 << endl;
    cout << "Player 2 = " << player2352 << endl;
    cout << "Hasil = " << hasil352 << endl;
    cout << "-------------------------------------------" << endl;
    return hasil352;
}

int main(){
    rockPaperScissor352("gunting", "kertas");
    rockPaperScissor352("gunting", "batu");
    rockPaperScissor352("kertas", "batu");
    rockPaperScissor352("kertas", "kertas");
    rockPaperScissor352("batu", "batu");
}
