import subprocess
import sys
import os

def compile_and_run(filename):
    # 파일 경로 정규화 (공백 및 특수 문자 처리)
    normalized_filename = os.path.normpath(filename)
    # 현재 작업 디렉토리를 기준으로 전체 경로를 얻음
    full_path = os.path.join(os.getcwd(), normalized_filename)
    # 컴파일된 실행 파일 이름 설정 (확장자 없이, 현재 디렉토리로 설정)
    executable_name = os.path.join(os.getcwd(), os.path.splitext(normalized_filename)[0] + '.exe')
    # GCC를 사용해 컴파일하는 명령 구성 (파일 경로 인용)
    compile_command = f"gcc \"{full_path}\" -o \"{executable_name}\" -O2"
    
    # 컴파일 명령 실행
    compile_result = subprocess.run(compile_command, shell=True)
    if compile_result.returncode != 0:
        print("컴파일 실패")
        return

    # 실행 파일 실행
    run_command = f"\"{executable_name}\""
    run_result = subprocess.run(run_command, shell=True)
    if run_result.returncode != 0:
        print("실행 실패")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("사용법: python run_c.py <filename.c>")
    else:
        filename = sys.argv[1]
        compile_and_run(filename)
        remove_script = "remove_exe.py"
        subprocess.run(f"python \"{remove_script}\"", shell=True)
