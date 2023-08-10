#include <iostream>
#include <string>

using namespace std;

class YouTubeChannel{
public:
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
};

void operator<<(ostream& out, YouTubeChannel channel){
    out << "Name: " << channel.Name << endl;
    out << "Number of subscribers: " << channel.SubscribersCount << endl;
}

int main () {
    YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
    cout << yt1;
    return 0;
}
