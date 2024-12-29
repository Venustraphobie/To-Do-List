#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits> 
#include <windows.h>
#include <fstream>



int main(){
    int options;
    std::vector<std::string> listInput;
    std::string task;
    bool found = false;
    bool isDone = false;
   
    
    std::cout << "To do List" << std::endl;
    std::cout << "Please choose one of the following options: " << std::endl;
    std::cout << "1. Add item" << std::endl;
    std::cout << "2. Delete item" << std::endl;
    std::cout << "3. Mark item as done" << std::endl;
    std::cout << "4. Display list" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cin >> options;
    Sleep(100);

do{
    switch (options){ 
        case 1:
            std::cout << "Enter a task you wish to add to your to-do list: ";
            std::cin.ignore(); // Clear input stream
            std::getline(std::cin, task);
            listInput.push_back(task);
            std::cout << task << " has been added to the list." << std::endl;
            Sleep(1000);
            std::cout << "Please choose one of the following options: " << std::endl;
            std::cout << "1. Add item" << std::endl;
            std::cout << "2. Delete item" << std::endl;
            std::cout << "3. Mark item as done" << std::endl;
            std::cout << "4. Display list" << std::endl;
            std::cout << "5. Exit" << std::endl;
            std::cin >> options;
            Sleep(100);
            break;
    
        case 2:
            std::cout << "Enter a task you wish to remove from your to-do list: ";
            std::cin.ignore();
            std::getline(std::cin, task);

            
            for (size_t i = 0; i < listInput.size(); ++i) {
                if (listInput[i] == task) {
                listInput.erase(listInput.begin() + i);
                found = true;
                break;
        }
    }

            if(found){
                std::cout << task << " has been removed from the list." << std::endl;
                Sleep(1000);
            }
            else{
                std::cout << "Task not found in the list." << std::endl;
                Sleep(1000);
            }
            std::cout << "Please choose one of the following options: " << std::endl;
            std::cout << "1. Add item" << std::endl;
            std::cout << "2. Delete item" << std::endl;
            std::cout << "3. Mark item as done" << std::endl;
            std::cout << "4. Display list" << std::endl;
            std::cout << "5. Exit" << std::endl;
            std::cin >> options;
            Sleep(100);
    break;

        case 3:
            std::cout << "Enter a task you wish to mark as done: ";
            std::cin.ignore();
            std::getline(std::cin, task);

            for(size_t i = 0; i < listInput.size(); i++){
                if(listInput[i] == task){
                    listInput[i] += " (Done)";
                    found = true;
                    break;
                }
            }

            if(found){
                std::cout << task << " has been marked as done." << std::endl;
                Sleep(1000);
            }
            else{
                std::cout << "Task not found in the list." << std::endl;
                Sleep(1000);
            }

            std::cout << "Please choose one of the following options: " << std::endl;
            std::cout << "1. Add item" << std::endl;
            std::cout << "2. Delete item" << std::endl;
            std::cout << "3. Mark item as done" << std::endl;
            std::cout << "4. Display list" << std::endl;
            std::cout << "5. Exit" << std::endl;
            std::cin >> options;
            Sleep(100);
            break;

       case 4:{
            std::cout << "To-Do List:" << std::endl;
            for (const auto& item : listInput){
            std::cout << item << std::endl;
            Sleep(1000);
            }
                std::cout << "Please choose one of the following options: " << std::endl;
                std::cout << "1. Add item" << std::endl;
                std::cout << "2. Delete item" << std::endl;
                std::cout << "3. Mark item as done" << std::endl;
                std::cout << "4. Display list" << std::endl;
                std::cout << "5. Exit" << std::endl;
                std::cin >> options;
                Sleep(100);
            break;
            }
                break;
        
        case 5:
            std::cout << "Exiting...";
                break;
        default:
            std::cout << "Invalid choice." << std::endl;
                break;
    }
    
} while (options != 5);


return 0;
}

