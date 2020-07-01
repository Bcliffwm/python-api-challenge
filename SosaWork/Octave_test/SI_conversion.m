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
## @deftypefn {} {@var{retval} =} SI_conversion (@var{input1}, @var{input2})
##
## @seealso{}
## @end deftypefn

## Author: bocli <bocli@DESKTOP-1TVN2FD>
## Created: 2020-06-15

function disp = SI_conversion (height, weight)
  height=((input('Enter the feet of your height:')*12)+input('Enter your the inches of your height:'))/39.37
  weight=input('Enter your weight in pounds:')*0.45359237
endfunction
