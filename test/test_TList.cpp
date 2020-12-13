#include "List.h"
#include "../gtest/gtest.h"

TEST(TList, can_create_list)
{
  ASSERT_NO_THROW(TList<int> A);
}

TEST(TList, can_copy_list)
{
  TList<int> A;
  ASSERT_NO_THROW(TList<int> A2(A));
}

TEST(TList, can_insert_elem_in_first_list)
{
  TList<int> A;
  ASSERT_NO_THROW(A.InsFirst(10));
}

TEST(TList, can_insert_elem_in_last_list)
{
  TList<int> A;
  ASSERT_NO_THROW(A.InsLast(10));
}

TEST(TList, check_is_full)
{
  TList<int> A;

  EXPECT_EQ(A.IsFull(), false);
}

TEST(TList, check_is_empty)
{
  TList<int> A;

  EXPECT_EQ(A.IsEmpty(), true);
}

TEST(TList, can_get_elem_first)
{
  TList<int> A;
  A.InsFirst(10);
  ASSERT_NO_THROW(A.GetFirst());
}

TEST(TList, can_get_elem_last)
{
  TList<int> A;
  A.InsFirst(10);
  A.InsLast(20);
  ASSERT_NO_THROW(A.GetLast());
}

TEST(TList, can_del_elem_first)
{
  TList<int> A;
  A.InsFirst(10);
  A.InsLast(20);
  ASSERT_NO_THROW(A.DelFirst());
}

TEST(TList, can_del_elem_last)
{
  TList<int> A;
  A.InsFirst(10);
  A.InsLast(20);
  ASSERT_NO_THROW(A.DelLast());
}

TEST(TList, can_get_count)
{
  TList<int> A;
  A.InsFirst(10);
  A.InsLast(20);
  ASSERT_NO_THROW(A.GetCount());
}

TEST(TListElem, can_get_data_listelem)
{
  TListElem<int> A(10);

  EXPECT_EQ(A.GetData(), 10);
}

TEST(TListElem, can_get_next_listelem)
{
  TListElem<int> A(10);

  ASSERT_NO_THROW(A.GetNext());
}

TEST(TListElem, can_get_prev_listelem)
{
  TListElem<int> A(10);

  ASSERT_NO_THROW(A.GetPrev());
}

TEST(TListElem, can_set_data_listelem)
{
  TListElem<int> A(10);

  ASSERT_NO_THROW(A.SetData(20));
}