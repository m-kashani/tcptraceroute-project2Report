# tcptraceroute-project2Report

All this is: A modified version of the Michael Toren's program. copyright (c) (2001-2015)

 Removed a lot preprocessing directives of older versions of the LIBNET library and fixed type errors to make it compatible on an ubuntu 18.04 LTS. 

To run this program: ./configure make sudo ./tcptraceroute 'web' 'port' 

But, to get some extra credits you might like to test it with: 

Usage: 
%s [-nNFSAE] [-i ] [-f ]\n\ [-l ] [-q ] [-t ]\n\ [-m ] [-pP] ] [-s ]\n\ [-w ] [destination port] [packet length]
//-------------------------------------------------------------------- 
We made sure that our program is not having any memory leakage and we used ASAN and Valgrind and added them to the makefile as well as a flag. #commented. 

//------------------------------------------------------------------- 
You need to have some libraries installed so make sure that you have the following programs installed: "prereq.txt" I also added a video of how you can run this program as well as a report.pdf including the expected result and comparing it with the existed traceroute program that uses the UDP. 
===================================================================== 

This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License, version 2, as published by the Free Software Foundation. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. A copy of the GNU GPL is available as /usr/doc/copyright/GPL on Debian systems, or on the World Wide Web at http://www.gnu.org/copyleft/gpl.html You can also obtain it by writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
