#ifndef SFT_H
#define SFT_H
#include <gtest/gtest.h>

extern "C"{
#include "root.h"
}

TEST(rootTest,one_root){
    double *point = sqroot(1,2,1);
    ASSERT_EQ(point[0],1);
    ASSERT_EQ(point[1],-1);
    ASSERT_EQ(point[2],0);
    free(point);
}
TEST(rootTest,two_roots){
    double *point = sqroot(1,7,12);
    ASSERT_EQ(point[0],2);
    ASSERT_EQ(point[1],-4);
    ASSERT_EQ(point[2],-3);
}
TEST(rootTest,zero_roots){
    double *point = sqroot(1,1,12);
    ASSERT_EQ(point[0],0);
    ASSERT_EQ(point[1],0);
    ASSERT_EQ(point[2],0);
}
TEST(rootTest,negvar){
    double *point = sqroot(1,-8,-9);
    ASSERT_EQ(point[0],2);
    ASSERT_EQ(point[1],-1);
    ASSERT_EQ(point[2],9);

}
TEST(rootTest,mvar){
    double *point = sqroot(1,-8,-9);
    double *point2 = sqroot(-2,16,18);
    ASSERT_EQ(point[0],point2[0]);
    ASSERT_EQ(point[1],point2[1]);
    ASSERT_EQ(point[2],point2[2]);
}
TEST(rootTest,zero1){
    double *point = sqroot(0,2,4);
    ASSERT_EQ(point[0],-1);
    ASSERT_EQ(point[1],0);
    ASSERT_EQ(point[2],0);
}
TEST(rootTest,zero2){
    double *point = sqroot(1,0,-4);
    ASSERT_EQ(point[0],2);
    ASSERT_EQ(point[1],-2);
    ASSERT_EQ(point[2],2);
}
TEST(rootTest,zero3){
    double *point = sqroot(1,4,0);
    ASSERT_EQ(point[0],2);
    ASSERT_EQ(point[1],-4);
    ASSERT_EQ(point[2],0);
}
TEST(rootTest,zero23){
    double *point = sqroot(100,0,0);
    ASSERT_EQ(point[0],1);
    ASSERT_EQ(point[1],0);
    ASSERT_EQ(point[2],0);
}
TEST(rootTest,floatans){
    double *point = sqroot(3,-19,6);
    ASSERT_EQ(point[0],2);
    ASSERT_EQ(point[1],1./3);
    ASSERT_EQ(point[2],6);
}

#endif
