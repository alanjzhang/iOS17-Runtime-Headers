/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPluginManager : NSObject {
    NSArray * _allowablePluginDirectoryPaths;
    HDDaemon * _daemon;
    NSArray * _plugins;
}

@property (nonatomic, copy) NSArray *allowablePluginDirectoryPaths;
@property (nonatomic) HDDaemon *daemon;
@property (nonatomic, readonly, copy) NSArray *notificationInstructionCriteriaClasses;

- (void).cxx_destruct;
- (id)_createPluginsFromClasses:(id)arg1;
- (id)_pluginClasses;
- (id)_pluginDirectoryPaths;
- (id)allowablePluginDirectoryPaths;
- (id)createExtensionsForDaemon:(id)arg1;
- (id)createExtensionsForProfile:(id)arg1;
- (id)daemon;
- (id)initWithDaemon:(id)arg1;
- (void)notifyPluginsOfDatabaseObliteration;
- (id)pluginsConformingToProtocol:(id)arg1;
- (void)setAllowablePluginDirectoryPaths:(id)arg1;
- (void)setDaemon:(id)arg1;

// HDPluginManager (BuiltInPlugins)

- (id)_builtInPluginClasses;

// HDPluginManager (NotificationInstructionCriteria)

- (id)notificationInstructionCriteriaClasses;

@end
