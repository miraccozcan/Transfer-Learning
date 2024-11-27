#include <iostream>

using namespace std;

class PretrainedModel {
public:
    void loadModel() {
        cout << "Step 1: Load pre-trained model weights..." << endl;
    }

    void extractFeatures() {
        cout << "Step 2: Extracting features using pre-trained layers..." << endl;
    }
};

class NewTaskModel {
public:
    void addTaskSpecificLayers() {
        cout << "Step 3: Adding new layers specific to the task..." << endl;
    }

    void fineTune() {
        cout << "Step 4: Fine-tuning the model on task-specific data..." << endl;
    }
};

int main() {
    cout << "Starting Transfer Learning Process..." << endl;

    PretrainedModel pretrainedModel;
    pretrainedModel.loadModel();

    NewTaskModel newTaskModel;
    pretrainedModel.extractFeatures();
    newTaskModel.addTaskSpecificLayers();
    newTaskModel.fineTune();

    cout << "Transfer Learning Process Completed!" << endl;

    return 0;
}
