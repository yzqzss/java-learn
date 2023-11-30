package demo.yzqzss._2023_11_09;

import javax.swing.*;
import java.awt.*;

public class BobGUI extends JFrame {
    JPanel  name_input_panel,
            sex_single_chose_panel,
            study_way_multi_chose_panel,
            next_step_actions_panel;
    JLabel  jtp_top_color_title,
            name_lable,
            sex_lable,
            study_way_lable;
    JTextField name_textField;
    JRadioButton jrb_man, jrb_woman;
    ButtonGroup sex_checkboxes;
    JCheckBox jcb_online_study, jcb_book_study, jcb_group_study;
    JButton jb_button_VIEW, jb_button_OK, jb_button_CANCLE;

    BobGUI() {
        jtp_top_color_title = new JLabel();
        jtp_top_color_title.setText("大学生学习状况问卷调查");
        jtp_top_color_title.setFont(new Font("", Font.ITALIC, 30));
        jtp_top_color_title.setForeground(Color.PINK);
        jtp_top_color_title.setHorizontalAlignment(JLabel.CENTER);

        name_input_panel = new JPanel();
        name_input_panel.setLayout(new FlowLayout(FlowLayout.LEFT));
        name_lable = new JLabel("姓名：");
        name_textField = new JTextField(10);
        name_textField.setEditable(true);
        name_input_panel.add(name_lable);
        name_input_panel.add(name_textField);


        sex_single_chose_panel = new JPanel();
        sex_single_chose_panel.setLayout(new FlowLayout(FlowLayout.LEFT));
        sex_lable = new JLabel("性别：");
        jrb_man = new JRadioButton("男");
        jrb_woman = new JRadioButton("女");
        sex_checkboxes = new ButtonGroup();
        // 同一组单选按钮必须先创建ButtonGroup，再把单选框组件加入到ButtonGroup
        sex_checkboxes.add(jrb_man); // 单选框组件jrb1,jrb2加入到ButtonGroup
        sex_checkboxes.add(jrb_woman);
        sex_single_chose_panel.add(sex_lable);
        sex_single_chose_panel.add(jrb_man); // 还是jrb1和jrb2加入到jp2中，而不是bg1加入到jp2中
        sex_single_chose_panel.add(jrb_woman);

    
        study_way_multi_chose_panel = new JPanel();
        study_way_multi_chose_panel.setLayout(new FlowLayout(FlowLayout.LEFT));
        study_way_lable = new JLabel("自主学习方式：");
        jcb_online_study = new JCheckBox("网络学习");
        jcb_book_study = new JCheckBox("图书学习");
        jcb_group_study = new JCheckBox("小组学习");
        study_way_multi_chose_panel.add(study_way_lable);
        study_way_multi_chose_panel.add(jcb_online_study);
        study_way_multi_chose_panel.add(jcb_book_study);
        study_way_multi_chose_panel.add(jcb_group_study);


        next_step_actions_panel = new JPanel();
        jb_button_VIEW = new JButton("查看");
        jb_button_VIEW.setBackground(Color.YELLOW);
        jb_button_OK=new JButton("确定");
        jb_button_CANCLE = new JButton("取消");
        next_step_actions_panel.add(jb_button_VIEW);
        next_step_actions_panel.add(jb_button_OK);
        next_step_actions_panel.add(jb_button_CANCLE);

        this.add(jtp_top_color_title);
        this.add(name_input_panel);
        this.add(sex_single_chose_panel);
        this.add(study_way_multi_chose_panel);
        this.add(next_step_actions_panel);

        this.setLayout(new GridLayout(5, 3));
        this.setTitle("大学生学习状况问卷调查");
        this.setLocation(600, 400);
        this.setSize(800, 400);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(true);
        this.setVisible(true);
        // 字体大小 x2
        this.pack();
    }

    public static void main(String[] args) {
        BobGUI d = new BobGUI();
        d.setVisible(true);
    }
}
