///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGLinkAction;
@class DBSHARINGLinkPermission;
@class DBSHARINGPermissionDeniedReason;

#pragma mark - API Object

///
/// The `LinkPermission` struct.
///
/// Permissions for actions that can be performed on a link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGLinkPermission : NSObject <DBSerializable>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) DBSHARINGLinkAction * _Nonnull action;

/// (no description).
@property (nonatomic, readonly) NSNumber * _Nonnull allow;

/// (no description).
@property (nonatomic, readonly) DBSHARINGPermissionDeniedReason * _Nullable reason;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param action (no description).
/// @param allow (no description).
/// @param reason (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAction:(DBSHARINGLinkAction * _Nonnull)action
                                 allow:(NSNumber * _Nonnull)allow
                                reason:(DBSHARINGPermissionDeniedReason * _Nullable)reason;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param action (no description).
/// @param allow (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAction:(DBSHARINGLinkAction * _Nonnull)action allow:(NSNumber * _Nonnull)allow;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LinkPermission` struct.
///
@interface DBSHARINGLinkPermissionSerializer : NSObject

///
/// Serializes `DBSHARINGLinkPermission` instances.
///
/// @param instance An instance of the `DBSHARINGLinkPermission` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGLinkPermission` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGLinkPermission * _Nonnull)instance;

///
/// Deserializes `DBSHARINGLinkPermission` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGLinkPermission` API object.
///
/// @return An instantiation of the `DBSHARINGLinkPermission` object.
///
+ (DBSHARINGLinkPermission * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
