###############################################################################
# Copyright IBM Corp. and others 2018
#
# This program and the accompanying materials are made available under
# the terms of the Eclipse Public License 2.0 which accompanies this
# distribution and is available at https://www.eclipse.org/legal/epl-2.0/
# or the Apache License, Version 2.0 which accompanies this distribution and
# is available at https://www.apache.org/licenses/LICENSE-2.0.
#
# This Source Code may also be made available under the following
# Secondary Licenses when the conditions for such availability set
# forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
# General Public License, version 2 with the GNU Classpath
# Exception [1] and GNU General Public License, version 2 with the
# OpenJDK Assembly Exception [2].
#
# [1] https://www.gnu.org/software/classpath/license.html
# [2] https://openjdk.org/legal/assembly-exception.html
#
# SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0-only WITH Classpath-exception-2.0 OR GPL-2.0-only WITH OpenJDK-assembly-exception-1.0
###############################################################################

function(omr_add_core_test testname)
	omr_add_executable("${testname}"
		"${testname}.cpp"
		main.cpp
	)
	target_link_libraries("${testname}"
		PUBLIC
			omrcore
			omrvmstartup
			omrGtestGlue
	)
	omr_add_test(
		NAME    "${testname}"
		COMMAND "${testname}" --gtest_output=xml:${CMAKE_CURRENT_BINARY_DIR}/${testname}-results.xml
	)
endfunction(omr_add_core_test)

omr_add_core_test(TestBytes)
omr_add_core_test(TestTypeTraits)
