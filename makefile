ROOT := $(CURDIR)
SHELL = powershell.exe

CXX = g++

SUBDIR := $(ROOT)/src
SUBDIR += $(ROOT)/src/func

TARGET := $(ROOT)/build/main
OUTPUT := $(ROOT)/output

INCS := $(foreach dir,$(SUBDIR),-I$(dir))
SRCS := $(foreach dir,$(SUBDIR),$(wildcard $(dir)/**/*.cpp))
SRCS += $(foreach dir,$(SUBDIR),$(wildcard $(dir)/*.cpp))
OBJS := $(patsubst $(ROOT)/src/%.cpp,$(OUTPUT)/%.o,$(SRCS))
# $(info OBJS: $(OBJS))  # 用于变量打印
DEPS := $(patsubst %.o,%.d,$(OBJS))

$(TARGET) : $(OBJS)
	@Write-Output "linking..."
	@$(CXX) $(OBJS) -o $@
	@Write-Output "complete!"

$(OUTPUT)/%.o : src/%.cpp
	@Write-Output "compile $<..."
	@New-Item -ItemType Directory -Path "$(dir $@)" -Force > $null 2>&1
	@$(CXX) -MMD -MP -c $(INCS) $< -o $@

# @Write-Output compile $<...
.PHONY : clean

clean:
	@Write-Output "try to clean..."
	@rm -r $(OUTPUT)
	@Write-Output "complete!"

-include $(DEPS)