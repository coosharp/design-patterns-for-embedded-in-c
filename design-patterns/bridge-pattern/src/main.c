#include "../inc/bridge.h"
#include "../inc/client.h"
#include "../inc/server.h"



int main(void)
{
    struct server server_obj;
    struct client client_obj;
    struct drawer drawer_obj;

    server_register(&server_obj);
    client_register(&client_obj, &server_obj.ops);
    drawer_register(&drawer_obj, &client_obj.drawer_ops);

    drawer_write(&drawer_obj, "Hello World!", 12);


    return 0;
}