#include <iostream>

using namespace std;

class GameList{
  public:

  string judulGame;
  string Pengembang;
  string publisher;
  int hargaGame;

  GameList( string judulGame,int hargaGame,string Pengembang,string publisher){
GameList::judulGame = judulGame;
GameList::hargaGame = hargaGame;
GameList::Pengembang = Pengembang;
GameList::publisher = publisher;
  }

  void ShowGameList()
  {

    cout<<endl;
    cout<<"==============================================="<<endl;
    cout<<"judul Game : "<<GameList::judulGame<<endl;
    cout<<"Harga game : "<<GameList::hargaGame<<endl;
    cout<<"pengembang game : "<<GameList::Pengembang<<endl;
    cout<<"Publisher game : "<<GameList::publisher<<endl;
    cout<<endl;
    cout<<"================================================"<<endl;
    cout<<endl;
  }

  void ubah(const char *judulGame)
  {
    GameList::judulGame = judulGame;
  }

  int Harga( int hargaGame){
    return GameList::hargaGame + hargaGame;
  }

};
int main()
{

GameList FarCry = GameList("The Wicher 3",4500000,"ubisof","none");
GameList Thewicher = GameList("Thewicher ",4500000,"avalcne","undefine");
FarCry.ShowGameList();
FarCry.ubah("Far cry 5");
FarCry.ShowGameList();
FarCry.Harga(340000);
FarCry.ShowGameList();
Thewicher.ShowGameList();
return 0;
}