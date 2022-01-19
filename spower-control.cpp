#include <boost/asio/io_service.hpp>
#include <sdbusplus/asio/object_server.hpp>

#include <iostream>
#include <memory>

int main()
{
	boost::asio::io_service io;
	auto conn = std::make_shared<sdbusplus::asio::connection>(io);
	
    conn->request_name("xyz.openbmc_project.State.Host");
    conn->request_name("xyz.openbmc_project.State.Chassis");
    conn->request_name("xyz.openbmc_project.Chassis.Buttons");
    
	return 0;
}
