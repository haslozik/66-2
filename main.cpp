#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class zad {
	
	public:
		
	    ifstream wej;
	
	    zad();
	    ~zad();
};

zad::zad() {
    wej.open("c:\\dane.txt");
}

zad::~zad() {
    wej.close();
}

class alg {
	
    private:
        vector <int> nums;
    public:
        void weNums(int num);
        void sprNums();
        void wyczVector();

};

void alg::weNums(int num) {
    nums.push_back(num);
}

void alg::wyczVector() {
    nums.clear();
}

void alg::sprNums() {
    bool czyPraw = true;
    
    for (int i = 0; i <= 1; i++) {
        for (int j = 2; j < nums[i]; j++) {
            if (nums[i] % j == 0) {
                czyPraw = false;
            }
        }
    }
    if (czyPraw) {
        if (nums[0] * nums[1] == nums[2]) {
            for (int i = 0; i <= 2; i++) {
                cout << nums[i] << " ";
            }
            cout<< endl;
        }
    }
}

int main()
{
    wej f;
    alg a;
    int num;
    while (!f.wej.eof()) {
        for (int i = 0; i <= 2; i++) {
            f.wej >> num;
            a.weNums(num);
        }
        a.sprNums();
        a.wyczVector();
    }
}
