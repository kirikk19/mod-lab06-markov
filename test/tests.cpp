// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <ctime>
#include <iostream>
#include "textgen.h"
TEST(TEST1, TrueOrFalse) {
textgen text = textgen("Test1.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("Hello ; hello ; goodbye ; bye ; ", text.getprefix());
}
TEST(TEST2, TrueOrFalse) {
textgen text = textgen("Test1.txt");
srand(time(NULL));
text.setprefixlength(3);
text.readfile();
EXPECT_EQ("Hello hello goodbye ; hello goodbye hello ; "
"goodbye hello bye ; hello bye Hello ; "
"bye Hello hello ; ", text.getprefix());
}
TEST(TEST3, TrueOrFalse) {
textgen text = textgen("Test2.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("I - love love love love ; "
"love - pelmeni cinema chicken Enternet ; "
"pelmeni - I ; cinema - I ; chicken - I ; "
"Enternet - I ; ", text.getall());
}
TEST(TEST4, TrueOrFalse) {
textgen text = textgen("Test2.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("I", text.getsuffix(3));
}
TEST(TEST5, TrueOrFalse) {
textgen text = textgen("Test2.txt");
srand(time(NULL));
text.setprefixlength(1);
text.readfile();
EXPECT_EQ("chicken", text.getsuffix(2, 3));
}
