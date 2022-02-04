#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    void virtual display()
    {
        cout << "In 1st class we are" << endl;
    }
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is : " << videolength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    //for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();

    //for code with harry text

    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djtext(title, rating, words);
    // djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    tuts[0]->display();
    cout << "\n";
    tuts[1]->display();
    return 0;
}
/* 
Rules for virtual functions:=
1) They cannot be static.
2) They are accessed by object pointers.
3) Virtual functions can be a friend of another class.
4) A virtual function in base class might not be used.
5) A virtual function defined in the base class, there is 
   no necessity of redefining it in the derived class.

*/