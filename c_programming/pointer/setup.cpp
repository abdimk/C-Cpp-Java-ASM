#include <cstdlib>
#include <iostream>

int main() {
    std::string package_name = "cron";
    //std:: string package_name = "cron"
    int status = system(("dpkg-query -W -f='${Status}' " + package_name + " 2>/dev/null | grep -c \"ok installed\"").c_str());

    if (status == 0) {
        std::cout << "Package " << package_name << " is installed." << std::endl;
    } else {
        std::cout << "Package " << package_name << " is not installed. Installing..." << std::endl;
        system(("sudo apt-get install " + package_name).c_str());
    }

    return 0;
}
