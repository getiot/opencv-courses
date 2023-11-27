#include <opencv2/opencv.hpp>

int main()
{
    // 打开默认摄像头（设备编号 0）
    cv::VideoCapture cap(0);

    // 检查摄像头是否成功打开
    if (!cap.isOpened()) {
        std::cerr << "Error: 无法打开摄像头." << std::endl;
        return -1;
    }

    // 创建窗口用于显示图像
    cv::namedWindow("My Camera", cv::WINDOW_NORMAL);

    while (true) {
        // 读取一帧图像
        cv::Mat frame;
        cap >> frame;

        // 检查图像是否读取成功
        if (frame.empty()) {
            std::cerr << "Error: 无法读取图像." << std::endl;
            break;
        }

        // 在窗口中显示图像
        cv::imshow("My Camera", frame);

        // 检测键盘按键，如果按下 'q' 键，则退出循环
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    // 释放摄像头资源
    cap.release();

    // 关闭窗口
    cv::destroyAllWindows();

    return 0;
}
