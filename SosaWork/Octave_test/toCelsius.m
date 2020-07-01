## Copyright (C) 2020 bocli
## 
## This program is free software: you can redistribute it and/or modify it
## under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
## 
## This program is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
## 
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see
## <https://www.gnu.org/licenses/>.

## -*- texinfo -*- 
## @deftypefn {} {@var{retval} =} toCelsius (@var{input1}, @var{input2})
##
## @seealso{}
## @end deftypefn

## Author: bocli <bocli@DESKTOP-1TVN2FD>
## Created: 2020-06-15

function disp = toCelsius (F, C)
  F=input('Input the current temperature in degrees Farenheit:')
  C=5/9*(F-32)
endfunction
