#include "Mian.h"
#include "GetImgui.h"

int style_bw = 0;
namespace ui 
{
    ImVec2 Btnsize(150, 70);

    enum menu
    {
        seif,
        coin,
        fusw,
        buss
    };
    static menu m = seif;

    void screenui()
    {
        // 设置样式
        ImGuiStyle& style = ImGui::GetStyle();
        style.FrameRounding = 9.0f; // 控件圆角
        style.WindowRounding = 10.0f; // 窗口圆角
        style.GrabRounding = 10.0f; // 滑块圆角

        // 设置滑块的颜色
        style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.3f, 0.7f, 0.9f, 1.0f);
        style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.1f, 0.5f, 0.7f, 1.0f);
        
        ImGui::SetNextWindowSize({600, 390});
        ImGui::Begin("##Screen", nullptr, ImGuiWindowFlags_NoCollapse + ImGuiWindowFlags_NoResize + ImGuiWindowFlags_NoTitleBar + ImGuiWindowFlags_NoScrollbar);
        
        // 设置光标位置，增加距离边框的间距，例如 (14, 12) 像素
        ImGui::SetCursorPos(ImVec2(14, 12));
        ImGui::Text(u8"枫叶定制");

        // 左侧按钮区域
        ImGui::BeginChild("##left", ImVec2(160, 0), false);
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
        if (ImGui::Button(u8"绘制", Btnsize)) {
            m = seif;
        }

        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
        if (ImGui::Button(u8"自瞄", Btnsize)) {
            m = coin;
        }

        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
        if (ImGui::Button(u8"功能", Btnsize)) {
            m = fusw;
        }

        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
        if (ImGui::Button(u8"设置", Btnsize)) {
            m = buss;
        }
        ImGui::EndChild();

        // 右侧内容区域
        ImGui::SameLine();
        ImGui::BeginChild("##right", ImVec2(0, 0), false);
        
        // 获取绘图列表
        ImDrawList* draw_list = ImGui::GetWindowDrawList();
        // 窗口的绝对位置
        ImVec2 window_pos = ImGui::GetWindowPos();
        // 定义空白区域的位置和大小
        ImVec2 blank_area_pos = ImVec2(window_pos.x + 0, window_pos.y + 5);
        ImVec2 blank_area_size = ImVec2(415, 310);
        // 绘制空白区域
        float rounding = 10.0f; // 圆角半径
        draw_list->AddRectFilled(blank_area_pos, ImVec2(blank_area_pos.x + blank_area_size.x, blank_area_pos.y + blank_area_size.y), IM_COL32(200, 200, 200, 255), rounding);

        // 勾选框的状态变量
        // 第一菜单
        static bool checkbox1 = false;
        static bool checkbox2 = false;
        static bool checkbox3 = false;
        static bool checkbox4 = false;
        static bool checkbox5 = false;
        static bool checkbox6 = false;
        static bool checkbox7 = false;
        static bool checkbox8 = false;
        static bool checkbox9 = false;
        static bool checkbox10 = false;
        static bool checkbox11 = false;
        static bool checkbox12 = false;
        static bool checkbox13 = false;
        static bool checkbox14 = false;
        static bool checkbox15 = false;
        static bool checkbox16 = false;
        static bool checkbox17 = false;
        // 第二菜单
        static bool checkbox19 = false;
        static bool checkbox20 = false;
        static bool checkbox21 = false;
        static bool checkbox22 = false;
        static bool checkbox23 = false;
        // 第三菜单
        static float sliderValue = 50.0f; // 滑块初始值
        // 第四菜单
        static bool checkbox24 = false;
        // 判断菜单
        switch (m)
        {
        case ui::seif:
            ImGui::SetCursorPosY(20);
            ImGui::SetCursorPosX(10);
            if (ImGui::Button(u8"一键开启"))
            {
                checkbox1 = !checkbox1;
                checkbox2 = !checkbox2;
                checkbox3 = !checkbox3;
                checkbox4 = !checkbox4;
                checkbox5 = !checkbox5;
                checkbox6 = !checkbox6;
                checkbox7 = !checkbox7;
                checkbox8 = !checkbox8;
                checkbox9 = !checkbox9;
                checkbox10 = !checkbox10;
                checkbox11 = !checkbox11;
                checkbox12 = !checkbox12;
                // 按钮回调
            }
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Checkbox(u8"真人绘制", &checkbox1);
            ImGui::SameLine();
            ImGui::Checkbox(u8"人机绘制", &checkbox2);
            ImGui::SameLine();
            ImGui::Checkbox(u8"物质绘制", &checkbox3);
            ImGui::SameLine();
            ImGui::Checkbox(u8"骨骼绘制", &checkbox4);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Checkbox(u8"人物方框", &checkbox5);
            ImGui::SameLine();
            ImGui::Checkbox(u8"人物射线", &checkbox6);
            ImGui::SameLine();
            ImGui::Checkbox(u8"背敌预警", &checkbox7);
            ImGui::SameLine();
            ImGui::Checkbox(u8"人物距离", &checkbox8);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Checkbox(u8"人物血量", &checkbox9);
            ImGui::SameLine();
            ImGui::Checkbox(u8"人物状态", &checkbox10);
            ImGui::SameLine();
            ImGui::Checkbox(u8"忽略人机", &checkbox11);
            ImGui::SameLine();
            ImGui::Checkbox(u8"绘制雷达", &checkbox12);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Text(u8"其他显示");
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Checkbox(u8"绘制载具", &checkbox13);
            ImGui::SameLine();
            ImGui::Checkbox(u8"绘制盒子", &checkbox14);
            ImGui::SameLine();
            ImGui::Checkbox(u8"绘制宝箱", &checkbox15);
            ImGui::SameLine();
            ImGui::Checkbox(u8"手雷预警", &checkbox16);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Checkbox(u8"骨骼点", &checkbox17);
            break;
        case ui::coin:
            ImGui::SetCursorPosY(10);
            ImGui::SetCursorPosX(10);
            if (ImGui::Button(u8"自瞄总开关"))
            {
                checkbox19 = !checkbox19;
                checkbox20 = !checkbox20;
                // 按钮回调
            }
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Checkbox(u8"准心射线", &checkbox19);
            ImGui::SameLine();
            ImGui::Checkbox(u8"动态自瞄", &checkbox20);
            ImGui::SameLine();
            ImGui::Checkbox(u8"持续锁定", &checkbox21);
            ImGui::SameLine();
            ImGui::Checkbox(u8"人机不瞄", &checkbox22);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Checkbox(u8"倒地不瞄", &checkbox23);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::Text(u8"触发条件");
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);
            ImGui::SetCursorPosX(10);
            ImGui::PushItemWidth(200);
            if (ImGui::Combo(u8"触发条件", &style_bw, u8"开火自瞄\0开镜自瞄\0开火开镜\0")) {

            }
            break;
        case ui::fusw:
            ImGui::SetCursorPosY(10);
            // ImGui::SetCursorPosX(10);
            ImGui::SetCursorPosX(10);
            ImGui::Text(u8"滑块控制示例:");
            ImGui::SliderFloat(u8"滑块", &sliderValue, 0.0f, 100.0f, u8"值: %.1f");
            break;
        case ui::buss:
            ImGui::SetCursorPosY(20);
            // ImGui::SetCursorPosX(10);
            if (ImGui::CollapsingHeader(u8"基址功能", ImGuiTreeNodeFlags_None)) {
                // CollapsingHeader 的内容
                ImGui::SetCursorPosX(10);
                ImGui::Checkbox(u8"功能1", &checkbox24);
            }
            break;   
        }

        ImGui::EndChild();
        ImGui::End();
    }
}
