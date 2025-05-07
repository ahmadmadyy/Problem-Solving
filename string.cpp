// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

std::vector<std::string> joint_names_ = {"lm450left_propeller_joint", "lm450right_steering_joint", "lm450right_propeller_joint", "lm450left_steering_joint"};

  //const std::string &name = joint_names_[i];

    //if (name.find("propeller_joint") != std::string::npos)

int main() {

    std::cout << "Full vector:" << std::endl;
    for (size_t i = 0; i < joint_names_.size(); ++i){
        std::cout << joint_names_[i] << " " << std::endl;
    }
    
    int res1,res2;
    std::vector<std::string> prop;
    std::vector<std::string> steer;
    for (size_t i = 0; i < joint_names_.size(); ++i){
        res1 = joint_names_[i].find("propeller");
        if(res1 != std::string::npos){
            prop.push_back(joint_names_[i]);
        }
        res2 = joint_names_[i].find("steering");
        if(res2 != std::string::npos){
            steer.push_back(joint_names_[i]);
        }
    }
    std::cout << "prop:" << std::endl;
    
    for(auto &element : prop){
        std::cout << element << std::endl;
    }
    
    std::cout << "steer:" << std::endl;
    
    for(auto &element : steer){
        std::cout << element << std::endl;
    }

    return 0;
}
