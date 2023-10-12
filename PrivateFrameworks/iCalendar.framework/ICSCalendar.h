/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSCalendar : ICSComponent {
    NSMutableSet * _keys;
    NSMutableDictionary * _masters;
    NSMutableDictionary * _occurrences;
    NSMutableArray * _parsingErrors;
    NSMutableDictionary * _timezones;
}

@property (nonatomic, retain) NSString *calscale;
@property (nonatomic) int method;
@property (nonatomic, retain) NSString *prodid;
@property (nonatomic, retain) NSString *version;
@property (nonatomic, retain) ICSDuration *x_apple_auto_refresh;
@property (nonatomic, retain) ICSColor *x_apple_calendar_color;
@property bool x_apple_ignore_on_restore;
@property (nonatomic, retain) NSString *x_apple_language;
@property (nonatomic, retain) NSString *x_apple_region;
@property int x_calendarserver_access;
@property (nonatomic, retain) NSString *x_wr_caldesc;
@property (nonatomic, retain) NSString *x_wr_calname;
@property (nonatomic, retain) NSString *x_wr_relcalid;
@property (nonatomic, retain) NSString *x_wr_timezone;

+ (id)ICSStringFromCalendarServerAccess:(int)arg1;
+ (id)ICSStringFromMethod:(int)arg1;
+ (int)calendarServerAccessFromICSString:(id)arg1;
+ (long long)compareCalendarServerAccess:(int)arg1 withAccess:(int)arg2;
+ (id)defaultProdid;
+ (int)methodFromICSString:(id)arg1;
+ (id)name;
+ (void)setDefaultProdid:(id)arg1;

- (void).cxx_destruct;
- (void)_addComponent:(id)arg1 withUIDGenerator:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (id)_initWithVersionAndProdID:(bool)arg1;
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;
- (void)addComponent:(id)arg1 withUIDGenerator:(id)arg2;
- (void)addParsingError:(id)arg1;
- (id)calscale;
- (id)componentForKey:(id)arg1;
- (id)componentKeys;
- (id)componentOccurrencesForKey:(id)arg1;
- (id)init;
- (int)method;
- (id)parsingErrors;
- (id)prodid;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)setCalscale:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponents:(id)arg1 options:(int)arg2;
- (void)setComponents:(id)arg1 timeZones:(bool)arg2;
- (void)setMethod:(int)arg1;
- (void)setProdid:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setX_apple_auto_refresh:(id)arg1;
- (void)setX_apple_calendar_color:(id)arg1;
- (void)setX_apple_language:(id)arg1;
- (void)setX_apple_region:(id)arg1;
- (void)setX_wr_caldesc:(id)arg1;
- (void)setX_wr_calname:(id)arg1;
- (void)setX_wr_relcalid:(id)arg1;
- (void)setX_wr_timezone:(id)arg1;
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;
- (id)systemDateForDate:(id)arg1 options:(int)arg2;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)version;
- (id)x_apple_auto_refresh;
- (id)x_apple_calendar_color;
- (id)x_apple_language;
- (id)x_apple_region;
- (id)x_wr_caldesc;
- (id)x_wr_calname;
- (id)x_wr_relcalid;
- (id)x_wr_timezone;

// ICSCalendar (Debug)

+ (id)calendarWithKnownTimeZones;

// ICSCalendar (Internal)

- (id)_init;

// ICSCalendar (RepairProperties)

- (void)fixComponent;
- (void)fixEntities;
- (void)fixPropertiesInheritance;

@end
