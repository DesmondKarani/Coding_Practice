#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100

struct Task {
    char name[100];
    char due_date[20];
    int done;
};

struct Task tasks[MAX_TASKS];
int num_tasks = 0;

void addTask() {
    if (num_tasks < MAX_TASKS) {
        struct Task newTask;
        printf("Enter Task Name: ");
        scanf("%s", newTask.name);
        printf("Enter Due Date: ");
        scanf("%s", newTask.due_date);
        newTask.done = 0;
        tasks[num_tasks++] = newTask;
        printf("Task added!\n");
    } else {
        printf("Task list is full!\n");
    }
}

void listTasks() {
    printf("Tasks:\n");
    for (int i = 0; i < num_tasks; i++) {
        printf("%d. %s (Due: %s) %s\n", i + 1, tasks[i].name, tasks[i].due_date, tasks[i].done ? "[Done]" : "");
    }
}

void markTaskAsDone() {
    int taskIndex;
    printf("Enter task index to mark as done: ");
    scanf("%d", &taskIndex);
    
    if (taskIndex >= 1 && taskIndex <= num_tasks) {
        tasks[taskIndex - 1].done = 1;
        printf("Task marked as done!\n");
    } else {
        printf("Invalid task index!\n");
    }
}

void deleteTask() {
    int taskIndex;
    printf("Enter task index to delete: ");
    scanf("%d", &taskIndex);
    
    if (taskIndex >= 1 && taskIndex <= num_tasks) {
        for (int i = taskIndex - 1; i < num_tasks - 1; i++) {
            tasks[i] = tasks[i + 1];
        }
        num_tasks--;
        printf("Task deleted!\n");
    } else {
        printf("Invalid task index!\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\nSimple Task Manager\n");
        printf("1. Add Task\n");
        printf("2. List Tasks\n");
        printf("3. Mark Task as Done\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                listTasks();
                break;
            case 3:
                markTaskAsDone();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}

