#ifndef MAP_08_HPP
#define MAP_08_HPP

#include <vector>

std::vector<std::vector<char>> map = {
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', 'S', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', '|', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', '|', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', '|', '.', '|', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', '|' },
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' }
};

#endif