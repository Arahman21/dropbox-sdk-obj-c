///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBSerializableProtocol.h"

@class DBTEAMDevicesActive;

#pragma mark - API Object

/// 
/// The DevicesActive struct.
/// 
/// Each of the items is an array of values, one value per day. The value is the
/// number of devices active within a time window, ending with that day. If
/// there is no data for a day, then the value will be None.
/// 
/// This class implements the DBSerializable protocol (serialize and deserialize
/// instance methods), which is required for all Obj-C SDK API route objects.
/// 
@interface DBTEAMDevicesActive : NSObject <DBSerializable> 

#pragma mark - Instance fields

/// Array of number of linked windows (desktop) clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull windows;

/// Array of number of linked mac (desktop) clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull macos;

/// Array of number of linked linus (desktop) clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull linux;

/// Array of number of linked ios devices with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull ios;

/// Array of number of linked android devices with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull android;

/// Array of number of other linked devices (blackberry, windows phone, etc)
/// with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull other;

/// Array of total number of linked clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull total;

#pragma mark - Constructors

/// 
/// Full constructor for the DBTEAMDevicesActive struct (exposes all instance
/// variables).
/// 
/// @param windows Array of number of linked windows (desktop) clients with
/// activity.
/// @param macos Array of number of linked mac (desktop) clients with activity.
/// @param linux Array of number of linked linus (desktop) clients with
/// activity.
/// @param ios Array of number of linked ios devices with activity.
/// @param android Array of number of linked android devices with activity.
/// @param other Array of number of other linked devices (blackberry, windows
/// phone, etc)  with activity.
/// @param total Array of total number of linked clients with activity.
/// 
/// @return An initialized DBTEAMDevicesActive instance.
/// 
- (nonnull instancetype)initWithWindows:(NSArray<NSNumber *> * _Nonnull)windows macos:(NSArray<NSNumber *> * _Nonnull)macos linux:(NSArray<NSNumber *> * _Nonnull)linux ios:(NSArray<NSNumber *> * _Nonnull)ios android:(NSArray<NSNumber *> * _Nonnull)android other:(NSArray<NSNumber *> * _Nonnull)other total:(NSArray<NSNumber *> * _Nonnull)total;

@end


#pragma mark - Serializer Object

/// 
/// The serialization class for the DevicesActive struct.
/// 
@interface DBTEAMDevicesActiveSerializer : NSObject 

/// 
/// Serializes DBTEAMDevicesActive instances.
/// 
/// @param instance An instance of the DBTEAMDevicesActive API object.
/// 
/// @return A json-compatible dictionary representation of the
/// DBTEAMDevicesActive API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBTEAMDevicesActive * _Nonnull)instance;

/// 
/// Deserializes DBTEAMDevicesActive instances.
/// 
/// @param dict A json-compatible dictionary representation of the
/// DBTEAMDevicesActive API object.
/// 
/// @return An instantiation of the DBTEAMDevicesActive object.
/// 
+ (DBTEAMDevicesActive * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end