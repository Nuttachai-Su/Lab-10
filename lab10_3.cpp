#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>
using namespace std;



using namespace std;



int main()

{
    int count = 0;
    double sum = 0;
    double sum_of_square = 0;
    double Mean,SD,meanSquares;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()),2);
        count++;
    }

    Mean = sum/count;
    meanSquares = sum_of_square/count;
    SD = pow((meanSquares - pow(Mean,2)),0.5);
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Mean << "\n";
    cout << "Standard deviation = " << SD;

}