#include <gtest/gtest.h>
#include "template_namespace.h"

TEST(Smoke, Addition)
{
	EXPECT_EQ(1 + 1, 2);
}

TEST(namespaceTest, Addition)
{
	EXPECT_EQ(TemplateNamespace::add<int>(2, 3), 5);
	EXPECT_EQ(TemplateNamespace::add<float>(2, 3), 5.0f);
	EXPECT_EQ(TemplateNamespace::add<char>('a', 1), 'b');
}