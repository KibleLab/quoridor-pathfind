#ifndef MAP_01_HPP
#define MAP_01_HPP

#include <vector>

std::vector<std::vector<char>> map = {
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', 'S', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', '|', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', '|' },
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' }
};

#endif