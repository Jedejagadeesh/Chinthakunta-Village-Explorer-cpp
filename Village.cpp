#include<iostream>
#include<string>
using namespace std;

class Village {
public:
    string name;
    Village* next;
};

template<class T>
void print(Village* n, T x) {
    cout << "Tadipatri <-> Chinthakunta\n";
    cout << "There are many ways to reach this village.\n";
    cout << "But I mention only one route because it is short and the road facilities are very good.\n";
    cout << "Also, I mention the distance below in this road map:\n";
    while (n != NULL) {
        cout << n->name << " -> ";
        n = n->next;
    }
    cout << x;
    cout << "\nThis is the route map to my village!";
    cout << "\nWould you like to see another option?\n";
    cout << "1. Village Famous Places\n";
    cout << "2. About People\n";
    cout << "3. Route & Distance to Our Village\n";
    cout << "4. About Village\n";
    cout << "5. Exit\n";
}

class Jede {
public:
    void Villageplaces() {
        cout << "--> Welcome to Chinthakunta Village <--\n";
        cout << "My village has three beautiful places:\n";
        cout << "1. SREE KALABHIRAVA TEMPLE:\n";
        cout << "This temple has a lot of history behind it! If you want more information about this temple, please choose option 4.\n";
        cout << "2. Some beautiful ponds\n";
        cout << "3. Village fields\n";
        cout << "These are the beautiful places in my village.\n";
    }
};

class Peoples {
public:
    void VillagePeoples() {
        cout << "<-- Welcome to Chinthakunta -->\n";
        cout << "This section gives information about the people in the village.\n";
        cout << "In my village, four types of people live here. I mention them below:\n";
        cout << "Type 1. OLD PEOPLE\n";
        cout << "Type 2. MIDDLE-AGED PEOPLE\n";
        cout << "Type 3. YOUNG PEOPLE\n";
        cout << "Type 4. CHILDREN\n";

        int n;
        cout << "Enter which people's information you want to see (1-4), or 5 to exit: ";
        cin >> n;

        while (n != 5) {
            if (n == 1) {
                cout << "This type of people stay in my village — approximately 100 members.\nAge group: 60 and above.\n";
            }
            else if (n == 2) {
                cout << "This type of people stay in my village — approximately 350 members.\nAge group: 40 to 55.\n";
            }
            else if (n == 3) {
                cout << "This type of people stay in my village — approximately 300 members.\nAge group: 20 to 33.\n";
            }
            else if (n == 4) {
                cout << "Children in the village — approximately 200 members.\nAge group: 1 to 15.\n";
            }

            int m;
            cout << "Do you want to try one more option (1-4) or exit (5)? ";
            cin >> m;
            n = m;
        }
    }
};

class Temple {
public:
    void Temples() {
        cout << "This village has a lot of history behind it. I am sharing the information I know...\n";
        cout << "I searched and asked the village people, and they told me about some mysteries.\n";
        cout << "<----- MYSTERY 1 ----->\n";
        cout << "SREE KALABHIRAVA SWAMI\n";
        cout << "This God came from KASHI and appeared here himself.\n";
        cout << "All the people in the village worship him every day.\n";
        cout << "Every year, a big festival is celebrated. On that day, everyone from the village — no matter where they live — returns to join the celebration.\n";

        cout << "<== MYSTERY 2 ==>\n";
        cout << "There is a mysterious well in the village believed to contain a lot of gold.\n";
        cout << "Many people have tried to take the gold, but it's impossible.\n";
        cout << "A snake and a spirit are believed to guard the well.\n";

        cout << "This is about my village. Thank you for visiting!\n";
    }
};

int main() {
    cout << "----> WELCOME TO CHINTHAKUNTA <----\n";
    cout << "What kind of information do you want to know about my village?\n";
    cout << "1. Village Famous Places\n";
    cout << "2. About People\n";
    cout << "3. Route & Distance to Our Village\n";
    cout << "4. About Village\n";
    cout << "5. Exit\n";

    int number;
    cout << "Please type your option (1-5): ";
    cin >> number;

    while (number != 5) {
        int na;
        switch (number) {
        case 1:
            Jede obj;
            obj.Villageplaces();
            break;
        case 2:
            Peoples obj2;
            obj2.VillagePeoples();
            break;
        case 4:
            Temple obj3;
            obj3.Temples();
            break;
        case 3:
            Village* first = new Village();
            Village* second = new Village();
            Village* six = new Village();
            Village* four = new Village();
            first->name = "Tadipatri";
            first->next = second;
            second->name = "Ravi Venkatampalli";
            second->next = six;
            six->name = "Yerraguntapalli";
            six->next = four;
            four->name = "Chinthakunta";
            four->next = NULL;
            print(first, "10 KM");
            break;
        }

        cout << "\nWould you like to try one more option or exit (5)? ";
        cin >> na;
        number = na;
    }

    return 0;
}
