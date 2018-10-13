package com.by5388.sy95306v2.bean.tz.number;

/**
 * 12306 车次查询返回item
 * @author by5388  on 2018/8/24.
 */
@SuppressWarnings("all")
public class NumberDataBean {
    /**
     * start_station_name : 湛江西
     * arrive_time : 09:20
     * station_train_code : D7458
     * station_name : 湛江西
     * train_class_name : 动车
     * service_type : 1
     * start_time : 09:20
     * stopover_time : ----
     * end_station_name : 广州南
     * station_no : 01
     * isEnabled : false
     */

    private String start_station_name;
    private String arrive_time;
    private String station_train_code;
    private String station_name;
    private String train_class_name;
    private String service_type;
    private String start_time;
    private String stopover_time;
    private String end_station_name;
    private String station_no;
    private boolean isEnabled;

    public String getStart_station_name() {
        return start_station_name;
    }

    public void setStart_station_name(String start_station_name) {
        this.start_station_name = start_station_name;
    }

    public String getArrive_time() {
        return arrive_time;
    }

    public void setArrive_time(String arrive_time) {
        this.arrive_time = arrive_time;
    }

    public String getStation_train_code() {
        return station_train_code;
    }

    public void setStation_train_code(String station_train_code) {
        this.station_train_code = station_train_code;
    }

    public String getStation_name() {
        return station_name;
    }

    public void setStation_name(String station_name) {
        this.station_name = station_name;
    }

    public String getTrain_class_name() {
        return train_class_name;
    }

    public void setTrain_class_name(String train_class_name) {
        this.train_class_name = train_class_name;
    }

    public String getService_type() {
        return service_type;
    }

    public void setService_type(String service_type) {
        this.service_type = service_type;
    }

    public String getStart_time() {
        return start_time;
    }

    public void setStart_time(String start_time) {
        this.start_time = start_time;
    }

    public String getStopover_time() {
        return stopover_time;
    }

    public void setStopover_time(String stopover_time) {
        this.stopover_time = stopover_time;
    }

    public String getEnd_station_name() {
        return end_station_name;
    }

    public void setEnd_station_name(String end_station_name) {
        this.end_station_name = end_station_name;
    }

    public String getStation_no() {
        return station_no;
    }

    public void setStation_no(String station_no) {
        this.station_no = station_no;
    }

    public boolean isIsEnabled() {
        return isEnabled;
    }

    public void setIsEnabled(boolean isEnabled) {
        this.isEnabled = isEnabled;
    }
}