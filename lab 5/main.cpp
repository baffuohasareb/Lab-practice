#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel{
    private:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
    public:
        YoutubeChannel(string name, string ownerName){
            Name = name;
            OwnerName = ownerName;
            SubscriberCount = 0;
        }

        void GetInfo() {
            cout << "Name: " << Name << endl;
            cout << "Owner Name: " << OwnerName <<endl;
            cout << "Number of Subscribers: " <<SubscriberCount <<endl;
        }

        void Suscribe(){SubscriberCount++;}

        void Unsuscribe(){
            if(SubscriberCount > 0){
                SubscriberCount--;
            }
        }

        void setter(string name){
            Name = name;
        }

        string getter(){return Name;}

        void PublishVideo(string title){
            PublishedVideoTitles.push_back(title);
        }
};

int main(){
    YoutubeChannel ytChannel("RayTech Consult", "Baffuohasareb");
    ytChannel.PublishVideo("HTML Forms");
    ytChannel.Unsuscribe();
    ytChannel.GetInfo();

    for(int i = 0; i < 20; i++){
        ytChannel.Suscribe();
    }

    cout << endl << endl;
    ytChannel.GetInfo();
}
