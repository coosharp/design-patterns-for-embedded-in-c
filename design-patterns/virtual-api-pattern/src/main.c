#include "../inc/obj.h"
#include "../inc/obj_impl.h"



int main(void)
{
    struct obj drawer;
    struct obj_impl drawer_impl;

    obj_impl_register(&drawer_impl);
    obj_register(&drawer, &drawer_impl.ops);

    obj_write(&drawer, "hello world", 11);
    obj_read(&drawer, "hello world", 11);
    
    return 0;
}