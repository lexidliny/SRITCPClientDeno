//

#include "sriCommDefine.h"
#include "sriCommManager.h"
#include <thread>

float force[6] = {0};

int64_t GetTickUs()
{
    struct timespec start;
    clock_gettime(CLOCK_MONOTONIC, &start);

    return (start.tv_sec * 1000000LLU) + (start.tv_nsec / 1000);
}


int main()
{
	printf("SRI TCP Client Demo.\n");
	CSRICommManager commManager;
	if (commManager.Init() == true)
	{
		if (commManager.Run() == true)
		{
		}
	}
	commManager.SendGODCommand("GSD", "");
	
	// Eigen::Vector3d eulerAngle;
	// eulerAngle[0] = 90.6 / 180. * M_PI;
	// eulerAngle[1] = 178.728 / 180. * M_PI;
	// eulerAngle[2] = 19.322 / 180. * M_PI;
	// Eigen::Vector2d force;
	
	



	int64_t now = 0;
	int64_t last = 0;
	int time_count = 0;
	// commManager.SendGODCommand("GSD", "");
	// while(time_count < 10000)
	// {
	// 	now = GetTickUs();
	// 	if((now - last) > 1000)
	// 	{
	// 		// std::cout << "control time: " <<now - last << std::endl;
	// 		force = commManager.getBaseForce(eulerAngle);
	// 		std::cout << "force: " << force.transpose() << std::endl;
	// 		last = GetTickUs();
	// 	time_count++;	
	// 	// std::cout << "duration time: ["<<  time_count << "]" << last - now << std::endl;
	// 	}
	// }
	// std::cout << "count: " << time_count << std::endl;
	// th.join();
	printf("Demo done!\nPress ENTER to close.\n");
	getchar();
    return 0;
}

