#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> tasks;
    int choice, index;
    string task;

    while (true) {
        cout << "\n1. Add Task\n2. Remove Task\n3. Show Tasks\n4. Exit\nChoose: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
        } 
        else if (choice == 2) {
            cout << "Enter task number to remove: ";
            cin >> index;
            if (index > 0 && index <= tasks.size()) tasks.erase(tasks.begin() + index - 1);
            else cout << "Invalid index!\n";
        } 
        else if (choice == 3) {
            cout << "\n===== To-Do List Start =====\n";
            if (tasks.empty()) cout << "No tasks available.\n";
            else for (int i = 0; i < tasks.size(); i++) cout << i + 1 << ". " << tasks[i] << endl;
            cout << "===== To-Do List End =====\n";  // End marker added
        } 
        else if (choice == 4) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}
