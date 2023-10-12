/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals : SISchemaInstrumentationMessage {
    int  _appUsageCountForEntity10Min;
    int  _appUsageCountForEntity14Days;
    int  _appUsageCountForEntity1Day;
    int  _appUsageCountForEntity1Hr;
    int  _appUsageCountForEntity28Days;
    int  _appUsageCountForEntity2Min;
    int  _appUsageCountForEntity6Hrs;
    int  _appUsageCountForEntity7Days;
    int  _appUsageCountForEntityFromSiri10Min;
    int  _appUsageCountForEntityFromSiri14Days;
    int  _appUsageCountForEntityFromSiri1Day;
    int  _appUsageCountForEntityFromSiri1Hr;
    int  _appUsageCountForEntityFromSiri28Days;
    int  _appUsageCountForEntityFromSiri2Min;
    int  _appUsageCountForEntityFromSiri6Hrs;
    int  _appUsageCountForEntityFromSiri7Days;
    int  _appUsageCountForEntityFromSiriInf;
    int  _appUsageCountForEntityInf;
    struct { 
        unsigned int appUsageCountForEntity2Min : 1; 
        unsigned int appUsageCountForEntity10Min : 1; 
        unsigned int appUsageCountForEntity1Hr : 1; 
        unsigned int appUsageCountForEntity6Hrs : 1; 
        unsigned int appUsageCountForEntity1Day : 1; 
        unsigned int appUsageCountForEntity7Days : 1; 
        unsigned int appUsageCountForEntity14Days : 1; 
        unsigned int appUsageCountForEntity28Days : 1; 
        unsigned int appUsageCountForEntityInf : 1; 
        unsigned int recencyOrderOfAppUsedForEntity : 1; 
        unsigned int timeSinceAppUsedForEntityInSec : 1; 
        unsigned int appUsageCountForEntityFromSiri2Min : 1; 
        unsigned int appUsageCountForEntityFromSiri10Min : 1; 
        unsigned int appUsageCountForEntityFromSiri1Hr : 1; 
        unsigned int appUsageCountForEntityFromSiri6Hrs : 1; 
        unsigned int appUsageCountForEntityFromSiri1Day : 1; 
        unsigned int appUsageCountForEntityFromSiri7Days : 1; 
        unsigned int appUsageCountForEntityFromSiri14Days : 1; 
        unsigned int appUsageCountForEntityFromSiri28Days : 1; 
        unsigned int appUsageCountForEntityFromSiriInf : 1; 
        unsigned int recencyOrderOfAppUsageForEntityFromSiri : 1; 
        unsigned int timeSinceAppUsedForEntityFromSiriInSec : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp2Min : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp10Min : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp1Hr : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp6Hrs : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp1Day : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp7Days : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp14Days : 1; 
        unsigned int taskAbandonCountForEntityInUsingApp28Days : 1; 
        unsigned int taskAbandonCountForEntityInUsingAppInf : 1; 
    }  _has;
    int  _recencyOrderOfAppUsageForEntityFromSiri;
    int  _recencyOrderOfAppUsedForEntity;
    int  _taskAbandonCountForEntityInUsingApp10Min;
    int  _taskAbandonCountForEntityInUsingApp14Days;
    int  _taskAbandonCountForEntityInUsingApp1Day;
    int  _taskAbandonCountForEntityInUsingApp1Hr;
    int  _taskAbandonCountForEntityInUsingApp28Days;
    int  _taskAbandonCountForEntityInUsingApp2Min;
    int  _taskAbandonCountForEntityInUsingApp6Hrs;
    int  _taskAbandonCountForEntityInUsingApp7Days;
    int  _taskAbandonCountForEntityInUsingAppInf;
    long long  _timeSinceAppUsedForEntityFromSiriInSec;
    long long  _timeSinceAppUsedForEntityInSec;
}

@property (nonatomic) int appUsageCountForEntity10Min;
@property (nonatomic) int appUsageCountForEntity14Days;
@property (nonatomic) int appUsageCountForEntity1Day;
@property (nonatomic) int appUsageCountForEntity1Hr;
@property (nonatomic) int appUsageCountForEntity28Days;
@property (nonatomic) int appUsageCountForEntity2Min;
@property (nonatomic) int appUsageCountForEntity6Hrs;
@property (nonatomic) int appUsageCountForEntity7Days;
@property (nonatomic) int appUsageCountForEntityFromSiri10Min;
@property (nonatomic) int appUsageCountForEntityFromSiri14Days;
@property (nonatomic) int appUsageCountForEntityFromSiri1Day;
@property (nonatomic) int appUsageCountForEntityFromSiri1Hr;
@property (nonatomic) int appUsageCountForEntityFromSiri28Days;
@property (nonatomic) int appUsageCountForEntityFromSiri2Min;
@property (nonatomic) int appUsageCountForEntityFromSiri6Hrs;
@property (nonatomic) int appUsageCountForEntityFromSiri7Days;
@property (nonatomic) int appUsageCountForEntityFromSiriInf;
@property (nonatomic) int appUsageCountForEntityInf;
@property (nonatomic) bool hasAppUsageCountForEntity10Min;
@property (nonatomic) bool hasAppUsageCountForEntity14Days;
@property (nonatomic) bool hasAppUsageCountForEntity1Day;
@property (nonatomic) bool hasAppUsageCountForEntity1Hr;
@property (nonatomic) bool hasAppUsageCountForEntity28Days;
@property (nonatomic) bool hasAppUsageCountForEntity2Min;
@property (nonatomic) bool hasAppUsageCountForEntity6Hrs;
@property (nonatomic) bool hasAppUsageCountForEntity7Days;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri10Min;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri14Days;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri1Day;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri1Hr;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri28Days;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri2Min;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri6Hrs;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiri7Days;
@property (nonatomic) bool hasAppUsageCountForEntityFromSiriInf;
@property (nonatomic) bool hasAppUsageCountForEntityInf;
@property (nonatomic) bool hasRecencyOrderOfAppUsageForEntityFromSiri;
@property (nonatomic) bool hasRecencyOrderOfAppUsedForEntity;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp10Min;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp14Days;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp1Day;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp1Hr;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp28Days;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp2Min;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp6Hrs;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingApp7Days;
@property (nonatomic) bool hasTaskAbandonCountForEntityInUsingAppInf;
@property (nonatomic) bool hasTimeSinceAppUsedForEntityFromSiriInSec;
@property (nonatomic) bool hasTimeSinceAppUsedForEntityInSec;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int recencyOrderOfAppUsageForEntityFromSiri;
@property (nonatomic) int recencyOrderOfAppUsedForEntity;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp10Min;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp14Days;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp1Day;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp1Hr;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp28Days;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp2Min;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp6Hrs;
@property (nonatomic) int taskAbandonCountForEntityInUsingApp7Days;
@property (nonatomic) int taskAbandonCountForEntityInUsingAppInf;
@property (nonatomic) long long timeSinceAppUsedForEntityFromSiriInSec;
@property (nonatomic) long long timeSinceAppUsedForEntityInSec;

- (int)appUsageCountForEntity10Min;
- (int)appUsageCountForEntity14Days;
- (int)appUsageCountForEntity1Day;
- (int)appUsageCountForEntity1Hr;
- (int)appUsageCountForEntity28Days;
- (int)appUsageCountForEntity2Min;
- (int)appUsageCountForEntity6Hrs;
- (int)appUsageCountForEntity7Days;
- (int)appUsageCountForEntityFromSiri10Min;
- (int)appUsageCountForEntityFromSiri14Days;
- (int)appUsageCountForEntityFromSiri1Day;
- (int)appUsageCountForEntityFromSiri1Hr;
- (int)appUsageCountForEntityFromSiri28Days;
- (int)appUsageCountForEntityFromSiri2Min;
- (int)appUsageCountForEntityFromSiri6Hrs;
- (int)appUsageCountForEntityFromSiri7Days;
- (int)appUsageCountForEntityFromSiriInf;
- (int)appUsageCountForEntityInf;
- (void)deleteAppUsageCountForEntity10Min;
- (void)deleteAppUsageCountForEntity14Days;
- (void)deleteAppUsageCountForEntity1Day;
- (void)deleteAppUsageCountForEntity1Hr;
- (void)deleteAppUsageCountForEntity28Days;
- (void)deleteAppUsageCountForEntity2Min;
- (void)deleteAppUsageCountForEntity6Hrs;
- (void)deleteAppUsageCountForEntity7Days;
- (void)deleteAppUsageCountForEntityFromSiri10Min;
- (void)deleteAppUsageCountForEntityFromSiri14Days;
- (void)deleteAppUsageCountForEntityFromSiri1Day;
- (void)deleteAppUsageCountForEntityFromSiri1Hr;
- (void)deleteAppUsageCountForEntityFromSiri28Days;
- (void)deleteAppUsageCountForEntityFromSiri2Min;
- (void)deleteAppUsageCountForEntityFromSiri6Hrs;
- (void)deleteAppUsageCountForEntityFromSiri7Days;
- (void)deleteAppUsageCountForEntityFromSiriInf;
- (void)deleteAppUsageCountForEntityInf;
- (void)deleteRecencyOrderOfAppUsageForEntityFromSiri;
- (void)deleteRecencyOrderOfAppUsedForEntity;
- (void)deleteTaskAbandonCountForEntityInUsingApp10Min;
- (void)deleteTaskAbandonCountForEntityInUsingApp14Days;
- (void)deleteTaskAbandonCountForEntityInUsingApp1Day;
- (void)deleteTaskAbandonCountForEntityInUsingApp1Hr;
- (void)deleteTaskAbandonCountForEntityInUsingApp28Days;
- (void)deleteTaskAbandonCountForEntityInUsingApp2Min;
- (void)deleteTaskAbandonCountForEntityInUsingApp6Hrs;
- (void)deleteTaskAbandonCountForEntityInUsingApp7Days;
- (void)deleteTaskAbandonCountForEntityInUsingAppInf;
- (void)deleteTimeSinceAppUsedForEntityFromSiriInSec;
- (void)deleteTimeSinceAppUsedForEntityInSec;
- (id)dictionaryRepresentation;
- (bool)hasAppUsageCountForEntity10Min;
- (bool)hasAppUsageCountForEntity14Days;
- (bool)hasAppUsageCountForEntity1Day;
- (bool)hasAppUsageCountForEntity1Hr;
- (bool)hasAppUsageCountForEntity28Days;
- (bool)hasAppUsageCountForEntity2Min;
- (bool)hasAppUsageCountForEntity6Hrs;
- (bool)hasAppUsageCountForEntity7Days;
- (bool)hasAppUsageCountForEntityFromSiri10Min;
- (bool)hasAppUsageCountForEntityFromSiri14Days;
- (bool)hasAppUsageCountForEntityFromSiri1Day;
- (bool)hasAppUsageCountForEntityFromSiri1Hr;
- (bool)hasAppUsageCountForEntityFromSiri28Days;
- (bool)hasAppUsageCountForEntityFromSiri2Min;
- (bool)hasAppUsageCountForEntityFromSiri6Hrs;
- (bool)hasAppUsageCountForEntityFromSiri7Days;
- (bool)hasAppUsageCountForEntityFromSiriInf;
- (bool)hasAppUsageCountForEntityInf;
- (bool)hasRecencyOrderOfAppUsageForEntityFromSiri;
- (bool)hasRecencyOrderOfAppUsedForEntity;
- (bool)hasTaskAbandonCountForEntityInUsingApp10Min;
- (bool)hasTaskAbandonCountForEntityInUsingApp14Days;
- (bool)hasTaskAbandonCountForEntityInUsingApp1Day;
- (bool)hasTaskAbandonCountForEntityInUsingApp1Hr;
- (bool)hasTaskAbandonCountForEntityInUsingApp28Days;
- (bool)hasTaskAbandonCountForEntityInUsingApp2Min;
- (bool)hasTaskAbandonCountForEntityInUsingApp6Hrs;
- (bool)hasTaskAbandonCountForEntityInUsingApp7Days;
- (bool)hasTaskAbandonCountForEntityInUsingAppInf;
- (bool)hasTimeSinceAppUsedForEntityFromSiriInSec;
- (bool)hasTimeSinceAppUsedForEntityInSec;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)recencyOrderOfAppUsageForEntityFromSiri;
- (int)recencyOrderOfAppUsedForEntity;
- (void)setAppUsageCountForEntity10Min:(int)arg1;
- (void)setAppUsageCountForEntity14Days:(int)arg1;
- (void)setAppUsageCountForEntity1Day:(int)arg1;
- (void)setAppUsageCountForEntity1Hr:(int)arg1;
- (void)setAppUsageCountForEntity28Days:(int)arg1;
- (void)setAppUsageCountForEntity2Min:(int)arg1;
- (void)setAppUsageCountForEntity6Hrs:(int)arg1;
- (void)setAppUsageCountForEntity7Days:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri10Min:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri14Days:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri1Day:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri1Hr:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri28Days:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri2Min:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri6Hrs:(int)arg1;
- (void)setAppUsageCountForEntityFromSiri7Days:(int)arg1;
- (void)setAppUsageCountForEntityFromSiriInf:(int)arg1;
- (void)setAppUsageCountForEntityInf:(int)arg1;
- (void)setHasAppUsageCountForEntity10Min:(bool)arg1;
- (void)setHasAppUsageCountForEntity14Days:(bool)arg1;
- (void)setHasAppUsageCountForEntity1Day:(bool)arg1;
- (void)setHasAppUsageCountForEntity1Hr:(bool)arg1;
- (void)setHasAppUsageCountForEntity28Days:(bool)arg1;
- (void)setHasAppUsageCountForEntity2Min:(bool)arg1;
- (void)setHasAppUsageCountForEntity6Hrs:(bool)arg1;
- (void)setHasAppUsageCountForEntity7Days:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri10Min:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri14Days:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri1Day:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri1Hr:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri28Days:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri2Min:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri6Hrs:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiri7Days:(bool)arg1;
- (void)setHasAppUsageCountForEntityFromSiriInf:(bool)arg1;
- (void)setHasAppUsageCountForEntityInf:(bool)arg1;
- (void)setHasRecencyOrderOfAppUsageForEntityFromSiri:(bool)arg1;
- (void)setHasRecencyOrderOfAppUsedForEntity:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp10Min:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp14Days:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp1Day:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp1Hr:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp28Days:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp2Min:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp6Hrs:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingApp7Days:(bool)arg1;
- (void)setHasTaskAbandonCountForEntityInUsingAppInf:(bool)arg1;
- (void)setHasTimeSinceAppUsedForEntityFromSiriInSec:(bool)arg1;
- (void)setHasTimeSinceAppUsedForEntityInSec:(bool)arg1;
- (void)setRecencyOrderOfAppUsageForEntityFromSiri:(int)arg1;
- (void)setRecencyOrderOfAppUsedForEntity:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp10Min:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp14Days:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp1Day:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp1Hr:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp28Days:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp2Min:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp6Hrs:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingApp7Days:(int)arg1;
- (void)setTaskAbandonCountForEntityInUsingAppInf:(int)arg1;
- (void)setTimeSinceAppUsedForEntityFromSiriInSec:(long long)arg1;
- (void)setTimeSinceAppUsedForEntityInSec:(long long)arg1;
- (int)taskAbandonCountForEntityInUsingApp10Min;
- (int)taskAbandonCountForEntityInUsingApp14Days;
- (int)taskAbandonCountForEntityInUsingApp1Day;
- (int)taskAbandonCountForEntityInUsingApp1Hr;
- (int)taskAbandonCountForEntityInUsingApp28Days;
- (int)taskAbandonCountForEntityInUsingApp2Min;
- (int)taskAbandonCountForEntityInUsingApp6Hrs;
- (int)taskAbandonCountForEntityInUsingApp7Days;
- (int)taskAbandonCountForEntityInUsingAppInf;
- (long long)timeSinceAppUsedForEntityFromSiriInSec;
- (long long)timeSinceAppUsedForEntityInSec;
- (void)writeTo:(id)arg1;

// INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
