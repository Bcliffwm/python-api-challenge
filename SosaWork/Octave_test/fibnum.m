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
## @deftypefn {} {@var{retval} =} fibnum (@var{input1}, @var{input2})
##
## @seealso{}
## @end deftypefn

## Author: bocli <bocli@DESKTOP-1TVN2FD>
## Created: 2020-06-16

function disp = fibnum (n)
% FIBNUM Fibonacci number
% FIBNUM generates the nth Fibonacci number
if n<=1
  f = 1;
else
  f = fibnum(n-1) + fibnum(n-2);
endif
endfunction