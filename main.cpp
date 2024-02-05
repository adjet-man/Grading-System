#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

double calculate_grade(double score) {
    if (score >= 80) {
        return 4.0;
    } else if (score >= 60) {
        return 3.5;
    } else if (score >= 50) {
        return 3.0;
    } else {
        return 2.0;
    }
}

int main() {
    vector<double> scores;

    while (true) {
        string input;
        cout << "Enter score (q to quit): ";
        cin >> input;
        if (input == "q") {
            break;
        }
        
        double score = -1; // initialize score to an invalid value
        
        try {
            score = stod(input); // try to convert input to a double
        } catch (...) { // catch any exceptions thrown by stod()
            cout << "Invalid input, please enter a number." << endl;
            continue; // go back to the beginning of the loop
        }
        
        double grade = calculate_grade(score);
        cout << "Grade: " << grade << endl;
        
        scores.push_back(score);
    }

    if (scores.empty()) {
        cout << "No scores entered." << endl;
        return 0;
    }

    double sum = 0.0;
    
    for (double score : scores) {
        sum += score;
    }
    
    //average of calculated scores
    double average = sum / scores.size();
    
    double final_grade = calculate_grade(average);
    
    cout << "Final grade: " << final_grade << endl;

    return 0;
}