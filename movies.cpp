#include<iostream>
using namespace std;

class Movie {
    private :
         string ratings;
    public:
          string title;
          string name;

          Movie(string atitle, string aname,  string aratings){
            title = atitle;
            name = aname;
            setratings(aratings);
          }

   void setratings(string aratings){
     if(aratings == "A" || aratings == "C"){
        ratings = aratings;
     }
     else{
        ratings ="NR";
     }
   }
   string getratings(){
    return ratings;
   }
};

int main(){
    Movie Avengers ("Avenger", "AB","AB");
    Avengers.setratings("ALL");
    cout << Avengers.getratings();
    cout << "\n";

    return 0;
}